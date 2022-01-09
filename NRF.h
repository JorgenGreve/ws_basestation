/*
 * 
 * Author(s):   Kim Holmberg Christensen 
 *              Jørgen Drelicharz Greve
 * 
 * Filename:    NRF.h
 * Version:     1.0 
 * Date:        16.05.2021
 * 
 */

#include "mcc_generated_files/system.h"
#include <libpic30.h>

#define CSN_lo LATBbits.LATB10 = 0;
#define CSN_hi LATBbits.LATB10 = 1;
#define CE_lo LATBbits.LATB9 = 0;
#define CE_hi LATBbits.LATB9 = 1;
#define PWR_UP          0x02
#define TX_mode         0x0A
#define RX_mode         0x0B
#define W_reg           0x20
#define R_reg           0x00
#define Write_TX_PLD    0xA0
#define Read_RX_PLD     0x61

//Register adresses NRF
#define CONFIG          0x00
#define EN_AA           0x01
#define EN_RXADDR       0x02
#define SETUP_AW        0x03
#define SETUP_RETR      0x04
#define RF_CH           0x05
#define RF_SETUP        0x06
#define STATUS          0x07
#define OBSERVE_TX      0x08
#define CD              0x09
#define RX_ADDR_P0      0x0A
#define TX_ADDR         0x10
#define RX_PW_P0        0x11

void Write_NRF(char reg, char value);

char Read_NRF(char reg);

void Write_Buffer_NRF(char dest, char * buffer, char amount_bytes);

void Read_Buffer_NRF(char dest, char * buffer, char amount_bytes);

void Send_Data_NRF(char * buffer);

void NRF_FLUSH(void);

void Read_Data_NRF(char *buffer);

char Data_Ready_NRF(void);

void startup_NRF_delay(void);

void pwr_up_NRF(void);

void config_NRF(void);

