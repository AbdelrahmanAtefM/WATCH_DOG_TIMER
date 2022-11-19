/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */


///********************* Application on  Watch dog Timer WDT ********************//


///*****************INCLUDES**********//
#include "main.h"      ///*** this is a header file to contain all includes of Application



int main ()
{

	_delay_ms(10000);       //// delay for 10 sec then light again
      H_LED_Void_LedInit(BLUE_LED);          //// Initialize  BLUE    LED
      H_LED_Void_LedInit(RED_LED);           //// Initialize  RED     LED
      H_LED_Void_LedInit(GRN_LED);           //// Initialize  GREEN   LED
      H_LED_Void_LedInit(YELLOW_LED);       ////  Initialize  YELLOW  LED

      H_LED_Void_LedOn(BLUE_LED);            //// Turn ON     BLUE    LED
      H_LED_Void_LedOn(RED_LED);             //// Turn ON     RED     LED
      H_LED_Void_LedOn(GRN_LED);             //// Turn ON     GREEN   LED
      H_LED_Void_LedOn(YELLOW_LED);         ////  Turn ON     YELLOW  LED

      M_WDT_void_WDTEnable();             /////// Enable  WDT Watch dog Timer

       //M_WDT_void_WDTDisable();          /////// Disable  WDT Watch dog Timer

    while (1)
       {

          M_WDT_void_WDTRefresh();     /////// Refresh  WDT Watch dog Timer
       }


}

