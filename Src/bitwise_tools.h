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

#define BIT_16 0x8000  //0b10000000 00000000
#define BIT_15 0x4000  //0b01000000 00000000
#define BIT_14 0x2000  //0b00100000 00000000
#define BIT_13 0x1000  //0b00010000 00000000
#define BIT_12 0x800  // 0b00001000 00000000
#define BIT_11 0x400  // 0b00000100 00000000
#define BIT_10 0x200  // 0b00000010 00000000
#define BIT_9 0x100  //  0b00000001 00000000
#define BIT_8 0x80  //0b10000000
#define BIT_7 0x40 	//0b01000000
#define BIT_6 0x20	//0b00100000
#define BIT_5 0x10	//0b00010000
#define BIT_4 0x08	//0b00001000
#define BIT_3 0x04	//0b00000100
#define BIT_2 0x02	//0b00000010
#define BIT_1 0x01	//0b00000001

void print_bit(uint16_t num);
void comparison_numberWithRef(uint16_t num, uint16_t ref);
void shiftNUMLeft(uint16_t num, uint16_t bit);
void shiftNUMRight(uint16_t num, uint16_t bit);
void shiftBITLeft(uint16_t num, uint16_t bit);
void shiftBITClear(uint16_t num, uint16_t bit);

void Ex1(uint16_t num, uint16_t bit);
void Ex2(uint16_t num, uint16_t bit);
void Ex3(uint16_t num, uint16_t bit);

#endif /* SRC_BITWISE_TOOLS_H_ */
