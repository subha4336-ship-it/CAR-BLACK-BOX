/* 
 * File:   adc.h
 * Author: subha
 *
 * Created on 9 June, 2026, 5:53 PM
 */

#ifndef ADC_H
#define	ADC_H

#define CHANNEL4		0x04
void init_adc(void);
unsigned short read_adc(unsigned char channel);

#endif	/* ADC_H */

