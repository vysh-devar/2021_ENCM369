/*!**********************************************************************************************************************
@file encm369_pic18.h                                                                
@brief This file provides header information for the eief1-pcb-01 board.
***********************************************************************************************************************/

#ifndef __ENCM369_H
#define __ENCM369_H

/*! @cond DOXYGEN_EXCLUDE */
/***********************************************************************************************************************
Perihperal Setup Initializations

Bookmarks:
&&&&& Function Declarations
!!!!! GPIO pin names
@@@@@ Watchdog, Power Control, Clock, and Systick setup values
##### GPIO initial setup values
$$$$$ PWM setup values

***********************************************************************************************************************/
/*! @endcond */


/***********************************************************************************************************************
Type Definitions
***********************************************************************************************************************/



/***********************************************************************************************************************
* Constants
***********************************************************************************************************************/
#define SYS_FREQ                  (u32)64000000
#define FCY                       SYS_FREQ/4

#define OSC_VALUE                 (u32)64000000                              /*!< @brief Internal oscillator value */
#define MAINCK                    OSC_VALUE/4                                /*!< @brief Main clock is base frequency / 4 */



/***********************************************************************************************************************
* Macros
***********************************************************************************************************************/
#define HEARTBEAT_ON()      (LATA |=0x80)    /*!< @brief Turns on Heartbeat LED */
#define HEARTBEAT_OFF()     (LATA &=0x7F)   /*!< @brief Turns off Heartbeat LED */


/***********************************************************************************************************************
&&&&& Function Declarations
***********************************************************************************************************************/

/*------------------------------------------------------------------------------------------------------------------*/
/*! @publicsection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------------------------------------------*/
/*! @protectedsection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/
void ClockSetup(void);
void GpioSetup(void);

void SysTickSetup(void);
void SystemSleep(void);


/*--------------------------------------------------------------------------------------------------------------------*/
/*! @privatesection */                                                                                            
/*--------------------------------------------------------------------------------------------------------------------*/


/***********************************************************************************************************************
!!!!! GPIO pin names
***********************************************************************************************************************/
/* Hardware Definition for ENCM369 Activities */

/* Port A bit positions */
#define PA_07_              (u8)0x80
#define PA_06_              (u8)0x40
#define PA_05_              (u8)0x20
#define PA_04_              (u8)0x10
#define PA_03_              (u8)0x08
#define PA_02_              (u8)0x04
#define PA_01_              (u8)0x02 
#define PA_00_              (u8)0x01 


/* Port B bit positions */
#define PB_07_              (u8)0x80
#define PB_06_              (u8)0x40
#define PB_05_              (u8)0x20
#define PB_04_              (u8)0x10
#define PB_03_              (u8)0x08
#define PB_02_              (u8)0x04
#define PB_01_              (u8)0x02
#define PB_00_              (u8)0x01


/*! @cond DOXYGEN_EXCLUDE */



/***********************************************************************************************************************
@@@@@ Clock setup values
***********************************************************************************************************************/


/***********************************************************************************************************************
##### GPIO setup values
***********************************************************************************************************************/

/* TRISA Register: 
0: Pin is and output
1: Pin is high-impedance input
*/
#define TRISA_INIT (u8)0x007
/* 
    07 [0] PA_07_
    06 [0] PA_06_
    05 [0] PA_05_
    04 [0] PA_04_

    03 [0] PA_03_
    02 [1] PA_02_SD_DETECT PIO control enabled
    01 [1] PA_01_SD_WP PIO control enabled
    00 [1] PA_00_TP54 PIO control enabled
*/



#endif /* __EIEF1 */




/*--------------------------------------------------------------------------------------------------------------------*/
/* End of File                                                                                                        */
/*--------------------------------------------------------------------------------------------------------------------*/

#define TEMPLATE_INIT (u8)0x00
/*
    07 [0] 
    06 [0] 
    05 [0] 
    04 [0] 

    03 [0] 
    02 [0] 
    01 [0] 
    00 [0] 
*/



