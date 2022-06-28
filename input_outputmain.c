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
    TRISA0 = 0; // Initialize PORTA as output(connect LED to RA0)
    TRISA1 = 0; // Initialize PORTA as output(connect LED to RA0)
    while(1){
        if(RB0 == 0){
            RA0=1;    // Set RA0(make RA0 High)
            RA1=0;
        }else{
            RA0=0;    // Clear RA0(make RA0 LOW)
            RA1=1;
        }
    }
}
