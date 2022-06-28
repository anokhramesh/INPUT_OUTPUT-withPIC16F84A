/*
 * File:   input_outputmain.c
 * Author: Ramesh
 *
 * Created on June 28, 2022, 9:49 PM
 */

// Input_Output with PIC16F84A
#include <xc.h>
#define _XTAL_FREQ 4000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & CP_ON);
 
 
void main() {
    TRISB0 = 1; // Initialize PORTB0 as input(connect Button to RB0)
    TRISA0 = 0; // Initialize PORTA0 as output(connect LED to RA0)
    TRISA1 = 0; // Initialize PORTA1 as output(connect LED to RA1)
    while(1){
        if(RB0 == 0){// if button is pressed
            RA0=1;    // (make PORTA0 High and on the LED)
            RA1=0;    // (make PORTA1 LOW and off the LED)
        }else{
            RA0=0;    //(make PORTA0 LOW and off the LED) 
            RA1=1;   //(make  PORTA1 High and on the LED)
        }
    }
}
