/**
 @file    adc.h
 @author  Ricardo Gomez
 @brief   adc init and ISR
*/
// Do not write above this line (except comments)!

#ifndef __ADC_H
#define __ADC_H

#include "common.h"


// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void adcinit(void) //por comprobar en la placa
{
    output_high(BTCM);
    setup_adc(ADC_CLOCK_INTERNAL | ADC_TAD_MUL_31);
    setup_adc_ports(sAN4, VSS_VDD);
    set_adc_channel(4);
//   setup_timer3(TMR_INTERNAL, 18425); //  200 Hz. Ty/2/18425
//   ADC1CON2 = 0b0000000000000000; // voltage reference en ADC1CON2
//   ADC1CON3 = 0b1000000000000000; // select the analog conversion clock <7:0> y <15> para enable Tad
//   AD1PCFGL = 0b1111111111111110; // AN1 entrada analogica - RB1 - PGC en placa
//   AD1CHS0  = 0b0000000100000001; // AN1 entrada seleccionada para el CH0
//   AD1PCFGL = 0b0000000011110111; // AN4 entrada analogica - RB1 - PGC en placa
//   AD1CHS0  = 0b0000010000000100; // AN4 entrada seleccionada para el CH0
//
//   ADC1CON1 = 0b1011010101000110; // 12 bits - Signed Integer - <7:5> 010 Timer3 for ADC1 - <15> Sampling inmediatly after EOC <9:0> unsigned int

}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
#endif // __ADC_H
