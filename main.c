/*
 * 
 * Author(s):   Kim Holmberg Christensen 
 *              Jørgen Drelicharz Greve
 * 
 * Filename:    main.c
 * Version:     1.0 
 * Date:        16.05.2021
 * 
 */


#include "mcc_generated_files/system.h" // MCC files
#include "NRF.h"
#include <stdio.h>


int main(void)
{
    SYSTEM_Initialize();            // MCC initialize
    startup_NRF_delay();            // To let SPI get ready for TX
    pwr_up_NRF();                   // Power up NRF
    config_NRF();                   // Configure NRF
    
    char data_in[5] = {NULL};       // NRF received data is stored here
    long cnt = 0;                   // For small delay
    int dataRead = 0;               // For LED toggle on data receive
    
    while (1)
    {
        
        if(cnt > 1000)  // Adds a small delay for stability
            {
            
            /////////// RECEIVE DATA FROM NRF //////////////////////////////////
            while(Data_Ready_NRF())         // Stay while NRF data ready
                {
                dataRead = 1;
                }
            
            Read_Data_NRF(data_in);         // Read NRF data to data_in
            
            if(dataRead == 1)               // LED toggle when data is received
                {
                dataRead = 0;
                LATBbits.LATB5 = !LATBbits.LATB5;
                }
            
            /////////// WIND DATA PROCESSING ///////////////////////////////////
            if(data_in[0] == 'W')           // Select only wind data
                {
                printf("%s \n",data_in);    // Send data to ESP8266 wifi
                }
            
            cnt = 0;
            }
        
        cnt++;
    }

    return 1;
}

