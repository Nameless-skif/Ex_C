/*
 * bitwise_tools.h
 *
 *  Created on: 6 θών. 2024 γ.
 *      Author: Win_7
 */

#ifndef SRC_BITWISE_TOOLS_H_
#define SRC_BITWISE_TOOLS_H_

#include <stdio.h>
#include <inttypes.h>

#define BIT_8 0x80  //0b10000000
#define BIT_7 0x40 	//0b01000000
#define BIT_6 0x20	//0b00100000
#define BIT_5 0x10	//0b00010000
#define BIT_4 0x08	//0b00001000
#define BIT_3 0x04	//0b00000100
#define BIT_2 0x02	//0b00000010
#define BIT_1 0x01	//0b00000001

void print_bit(unsigned char num);
void comparison_numberWithRef(unsigned char num, unsigned char ref);
void shiftNUMLeft(unsigned char num, unsigned char bit);
void shiftNUMRight(unsigned char num, unsigned char bit);
void shiftBITLeft(unsigned char num, unsigned char bit);
void shiftBITClear(unsigned char num, unsigned char bit);

void Ex1(unsigned char num, unsigned char bit);
void Ex2(unsigned char num, unsigned char bit);
void Ex3(unsigned char num, unsigned char bit);

#endif /* SRC_BITWISE_TOOLS_H_ */
