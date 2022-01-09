/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.170.0
        Device            :  PIC24FJ256GA702
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.61
        MPLAB 	          :  MPLAB X v5.45
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RB10, high using LATB10.

  @Description
    Sets the GPIO pin, RB10, high using LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB10 high (1)
    CSN_SetHigh();
    </code>

*/
#define CSN_SetHigh()          (_LATB10 = 1)
/**
  @Summary
    Sets the GPIO pin, RB10, low using LATB10.

  @Description
    Sets the GPIO pin, RB10, low using LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB10 low (0)
    CSN_SetLow();
    </code>

*/
#define CSN_SetLow()           (_LATB10 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB10, using LATB10.

  @Description
    Toggles the GPIO pin, RB10, using LATB10.

  @Preconditions
    The RB10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB10
    CSN_Toggle();
    </code>

*/
#define CSN_Toggle()           (_LATB10 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB10.

  @Description
    Reads the value of the GPIO pin, RB10.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB10
    postValue = CSN_GetValue();
    </code>

*/
#define CSN_GetValue()         _RB10
/**
  @Summary
    Configures the GPIO pin, RB10, as an input.

  @Description
    Configures the GPIO pin, RB10, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB10 as an input
    CSN_SetDigitalInput();
    </code>

*/
#define CSN_SetDigitalInput()  (_TRISB10 = 1)
/**
  @Summary
    Configures the GPIO pin, RB10, as an output.

  @Description
    Configures the GPIO pin, RB10, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB10 as an output
    CSN_SetDigitalOutput();
    </code>

*/
#define CSN_SetDigitalOutput() (_TRISB10 = 0)
/**
  @Summary
    Sets the GPIO pin, RB5, high using LATB5.

  @Description
    Sets the GPIO pin, RB5, high using LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB5 high (1)
    LED1_SetHigh();
    </code>

*/
#define LED1_SetHigh()          (_LATB5 = 1)
/**
  @Summary
    Sets the GPIO pin, RB5, low using LATB5.

  @Description
    Sets the GPIO pin, RB5, low using LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB5 low (0)
    LED1_SetLow();
    </code>

*/
#define LED1_SetLow()           (_LATB5 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB5, using LATB5.

  @Description
    Toggles the GPIO pin, RB5, using LATB5.

  @Preconditions
    The RB5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB5
    LED1_Toggle();
    </code>

*/
#define LED1_Toggle()           (_LATB5 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB5.

  @Description
    Reads the value of the GPIO pin, RB5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB5
    postValue = LED1_GetValue();
    </code>

*/
#define LED1_GetValue()         _RB5
/**
  @Summary
    Configures the GPIO pin, RB5, as an input.

  @Description
    Configures the GPIO pin, RB5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB5 as an input
    LED1_SetDigitalInput();
    </code>

*/
#define LED1_SetDigitalInput()  (_TRISB5 = 1)
/**
  @Summary
    Configures the GPIO pin, RB5, as an output.

  @Description
    Configures the GPIO pin, RB5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB5 as an output
    LED1_SetDigitalOutput();
    </code>

*/
#define LED1_SetDigitalOutput() (_TRISB5 = 0)
/**
  @Summary
    Sets the GPIO pin, RB6, high using LATB6.

  @Description
    Sets the GPIO pin, RB6, high using LATB6.

  @Preconditions
    The RB6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB6 high (1)
    SCK_SetHigh();
    </code>

*/
#define SCK_SetHigh()          (_LATB6 = 1)
/**
  @Summary
    Sets the GPIO pin, RB6, low using LATB6.

  @Description
    Sets the GPIO pin, RB6, low using LATB6.

  @Preconditions
    The RB6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB6 low (0)
    SCK_SetLow();
    </code>

*/
#define SCK_SetLow()           (_LATB6 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB6, using LATB6.

  @Description
    Toggles the GPIO pin, RB6, using LATB6.

  @Preconditions
    The RB6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB6
    SCK_Toggle();
    </code>

*/
#define SCK_Toggle()           (_LATB6 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB6.

  @Description
    Reads the value of the GPIO pin, RB6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB6
    postValue = SCK_GetValue();
    </code>

*/
#define SCK_GetValue()         _RB6
/**
  @Summary
    Configures the GPIO pin, RB6, as an input.

  @Description
    Configures the GPIO pin, RB6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB6 as an input
    SCK_SetDigitalInput();
    </code>

*/
#define SCK_SetDigitalInput()  (_TRISB6 = 1)
/**
  @Summary
    Configures the GPIO pin, RB6, as an output.

  @Description
    Configures the GPIO pin, RB6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB6 as an output
    SCK_SetDigitalOutput();
    </code>

*/
#define SCK_SetDigitalOutput() (_TRISB6 = 0)
/**
  @Summary
    Sets the GPIO pin, RB7, high using LATB7.

  @Description
    Sets the GPIO pin, RB7, high using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 high (1)
    MISO_SetHigh();
    </code>

*/
#define MISO_SetHigh()          (_LATB7 = 1)
/**
  @Summary
    Sets the GPIO pin, RB7, low using LATB7.

  @Description
    Sets the GPIO pin, RB7, low using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 low (0)
    MISO_SetLow();
    </code>

*/
#define MISO_SetLow()           (_LATB7 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB7, using LATB7.

  @Description
    Toggles the GPIO pin, RB7, using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB7
    MISO_Toggle();
    </code>

*/
#define MISO_Toggle()           (_LATB7 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB7.

  @Description
    Reads the value of the GPIO pin, RB7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB7
    postValue = MISO_GetValue();
    </code>

*/
#define MISO_GetValue()         _RB7
/**
  @Summary
    Configures the GPIO pin, RB7, as an input.

  @Description
    Configures the GPIO pin, RB7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an input
    MISO_SetDigitalInput();
    </code>

*/
#define MISO_SetDigitalInput()  (_TRISB7 = 1)
/**
  @Summary
    Configures the GPIO pin, RB7, as an output.

  @Description
    Configures the GPIO pin, RB7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an output
    MISO_SetDigitalOutput();
    </code>

*/
#define MISO_SetDigitalOutput() (_TRISB7 = 0)
/**
  @Summary
    Sets the GPIO pin, RB8, high using LATB8.

  @Description
    Sets the GPIO pin, RB8, high using LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 high (1)
    MOSI_SetHigh();
    </code>

*/
#define MOSI_SetHigh()          (_LATB8 = 1)
/**
  @Summary
    Sets the GPIO pin, RB8, low using LATB8.

  @Description
    Sets the GPIO pin, RB8, low using LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 low (0)
    MOSI_SetLow();
    </code>

*/
#define MOSI_SetLow()           (_LATB8 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB8, using LATB8.

  @Description
    Toggles the GPIO pin, RB8, using LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB8
    MOSI_Toggle();
    </code>

*/
#define MOSI_Toggle()           (_LATB8 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB8.

  @Description
    Reads the value of the GPIO pin, RB8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB8
    postValue = MOSI_GetValue();
    </code>

*/
#define MOSI_GetValue()         _RB8
/**
  @Summary
    Configures the GPIO pin, RB8, as an input.

  @Description
    Configures the GPIO pin, RB8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an input
    MOSI_SetDigitalInput();
    </code>

*/
#define MOSI_SetDigitalInput()  (_TRISB8 = 1)
/**
  @Summary
    Configures the GPIO pin, RB8, as an output.

  @Description
    Configures the GPIO pin, RB8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an output
    MOSI_SetDigitalOutput();
    </code>

*/
#define MOSI_SetDigitalOutput() (_TRISB8 = 0)
/**
  @Summary
    Sets the GPIO pin, RB9, high using LATB9.

  @Description
    Sets the GPIO pin, RB9, high using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 high (1)
    CE_SetHigh();
    </code>

*/
#define CE_SetHigh()          (_LATB9 = 1)
/**
  @Summary
    Sets the GPIO pin, RB9, low using LATB9.

  @Description
    Sets the GPIO pin, RB9, low using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 low (0)
    CE_SetLow();
    </code>

*/
#define CE_SetLow()           (_LATB9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB9, using LATB9.

  @Description
    Toggles the GPIO pin, RB9, using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB9
    CE_Toggle();
    </code>

*/
#define CE_Toggle()           (_LATB9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB9.

  @Description
    Reads the value of the GPIO pin, RB9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB9
    postValue = CE_GetValue();
    </code>

*/
#define CE_GetValue()         _RB9
/**
  @Summary
    Configures the GPIO pin, RB9, as an input.

  @Description
    Configures the GPIO pin, RB9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an input
    CE_SetDigitalInput();
    </code>

*/
#define CE_SetDigitalInput()  (_TRISB9 = 1)
/**
  @Summary
    Configures the GPIO pin, RB9, as an output.

  @Description
    Configures the GPIO pin, RB9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an output
    CE_SetDigitalOutput();
    </code>

*/
#define CE_SetDigitalOutput() (_TRISB9 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC24FJ256GA702
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);



#endif
