/*
 * 
 * Author(s):   Kim Holmberg Christensen 
 *              Jørgen Drelicharz Greve
 * 
 * Filename:    NRF.c
 * Version:     1.0 
 * Date:        16.05.2021
 * 
 */

#define    FCY    (_XTAL_FREQ/2) 

#include <xc.h>
#include <libpic30.h>    
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdbool.h>

#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/spi1.h"
#include "NRF.h"



void Write_NRF(char reg, char value)
    {
    
    CSN_lo
    SPI1_Exchange8bit(W_reg | reg); 
    SPI1_Exchange8bit(value);
    CSN_hi

    }

char Read_NRF(char reg)
    {
    char RB;
    CSN_lo
    SPI1_Exchange8bit(R_reg | reg);
    RB = SPI1_Exchange8bit(0x00);
    CSN_hi
            
    return RB;        

    }

void Write_Buffer_NRF(char dest, char * buffer, char amount_bytes)
    {
    char i;
    
    CSN_lo
    SPI1_Exchange8bit(W_reg | dest); 
    for (i = 0; i < amount_bytes; i++)
    {
        SPI1_Exchange8bit(*buffer);
        buffer++;
        __delay_us(10);
    }
    CSN_hi

    }

void Read_Buffer_NRF(char dest, char * buffer, char amount_bytes)
    {
    char i;
    
    CSN_lo
    SPI1_Exchange8bit(R_reg | dest);
    for (i = 0; i < amount_bytes; i++)
    {
        *buffer = SPI1_Exchange8bit(0xFF);
        buffer++; 
    }
    *buffer = (char)NULL;
    CSN_hi

    }

void Send_Data_NRF(char * buffer)
    {

    Write_Buffer_NRF(Write_TX_PLD, buffer, 5);
    CE_hi;
    __delay_ms(1);
    CE_lo;

    }

void NRF_FLUSH(void) 
{
    CSN_lo
    Write_NRF(STATUS, 0x70);
    __delay_ms(10);
    CSN_hi
    
    CSN_lo
    SPI1_Exchange8bit(0xE1); // Flush TX
    __delay_ms(10);
   
    CSN_hi
    
    CSN_lo
    SPI1_Exchange8bit(0xE2); // Flush RX
    __delay_ms(10);    
    CSN_hi
}

void Read_Data_NRF(char *buffer)
    {
    
    Read_Buffer_NRF(Read_RX_PLD, buffer, 5);
    Write_NRF(STATUS, 0x70);
    NRF_FLUSH();
    
    }

char Data_Ready_NRF(void)
    {
    if((Read_NRF(STATUS) & 0x40) == 0x40)
    {
        return 0;

    }
    return 1;
    }


void startup_NRF_delay(void)
    {
    __delay_ms(500);
    }

void pwr_up_NRF(void)
    {
    
     Write_NRF(CONFIG, PWR_UP);
    //SPI1_Exchange8bit(0x20 | 0x00);
    //SPI1_Exchange8bit(0x02);
    __delay_ms(2);

    }

void config_NRF(void) 
    {  
    char Adress[5] = {0xe1,0xe1,0xe1,0xe1,0xe1};
    Write_NRF(CONFIG, 0x0B); // Setup Config register
    Write_NRF(EN_AA, 0x00); // Enable auto ack data pipe0
    Write_NRF(EN_RXADDR, 0x01); // Enable data pipe0
    Write_NRF(SETUP_AW, 0x03); // Adress width 3 bytes
    Write_NRF(SETUP_RETR, 0x00); 
    Write_NRF(RF_CH, 0x32); //Set RF channel F0 = 2400+RF_CH MHz F0 = 2515 Mhz
    Write_NRF(RF_SETUP, 0x0f);
    Write_Buffer_NRF(W_reg | RX_ADDR_P0, Adress, 5);
    Write_Buffer_NRF(W_reg | TX_ADDR, Adress, 5);
    Write_NRF(RX_PW_P0, 0x05);
    
    /********************************Set as RX*****************************************/
    __delay_us(10); 
    Write_NRF(CONFIG, 0x0B);
    CE_hi;
    __delay_us(10);
    /**********************************************************************************/
    /********************************Set as TX*****************************************/
    //__delay_us(10); 
    //Write_NRF(CONFIG, 0x0A);
    //CE_lo;
    //__delay_us(10);
    
    /**********************************************************************************/
    }


