/* 
 * File:   eeprom.h
 * Author: subha
 *
 * Created on 9 June, 2026, 6:01 PM
 */

#ifndef INTERNAL_EEPROM_H
#define INTERNAL_EEPROM_H

void write_internal_eeprom(unsigned char address, unsigned char data);
unsigned char read_internal_eeprom(unsigned char address);

#endif
