/*
 * bitwise_tools.c
 *
 *  Created on: 6 июн. 2024 г.
 *      Author: Win_7
 */
#include "bitwise_tools.h"


void print_bit(uint16_t num)
{
	printf("%i: ", num);
	printf("%i", (num & BIT_16) ? 1:0);
	printf("%i", (num & BIT_15) ? 1:0);
	printf("%i", (num & BIT_14) ? 1:0);
	printf("%i", (num & BIT_13) ? 1:0);
	printf("%i", (num & BIT_12) ? 1:0);
	printf("%i", (num & BIT_11) ? 1:0);
	printf("%i", (num & BIT_10) ? 1:0);
	printf("%i", (num & BIT_9) ? 1:0);
	printf("%i", (num & BIT_8) ? 1:0);
	printf("%i", (num & BIT_7) ? 1:0);
	printf("%i", (num & BIT_6) ? 1:0);
	printf("%i", (num & BIT_5) ? 1:0);
	printf("%i", (num & BIT_4) ? 1:0);
	printf("%i", (num & BIT_3) ? 1:0);
	printf("%i", (num & BIT_2) ? 1:0);
	printf("%i\n", (num & BIT_1) ? 1:0);

}

void comparison_numberWithRef(uint16_t num, uint16_t ref)
{   //сравнивает число с другим числом
	// дл€ примера:
	// num = 54, 0x36, 00110110

	if((num & ref) == ref){
		printf("Correct\n");
	}
	else
		printf("Nope\n");
}

void shiftNUMLeft(uint16_t num, uint16_t bit){
	// 1 - число, 2 - на сколько бит сдвигаетс€
	// —двигаетс€ все число, а не отдельный бит
	// 2, 0x02, 0b00000010
	print_bit(num);
	print_bit(num << bit);
	printf("\n");
}

void shiftNUMRight(uint16_t num, uint16_t bit){
	// 1 - число, 2 - на сколько бит сдвигаетс€
	// 2, 0x02, 0b00000010
	print_bit(num);
	print_bit(num >> bit);
	printf("\n");
}

void shiftBITLeft(uint16_t num, uint16_t bit){
	//¬ыставление отдельного бита в заданном числе(без обнулени€)
	print_bit(num);
	print_bit( num | (1 << bit));
	printf("\n");
}

void shiftBITClear(uint16_t num, uint16_t bit){
	print_bit(num);
	print_bit((num & 0) | (1 << bit));
	printf("\n");
}

void Ex1(uint16_t num, uint16_t bit){
	print_bit(num);
	print_bit(num &~ (1 << bit));
	printf("\n");
}

void Ex2(uint16_t num, uint16_t bit){
	print_bit(num);
	print_bit(num ^ (1 << bit));
	printf("\n");
}

void Ex3(uint16_t num, uint16_t bit){
	print_bit(num);
	print_bit(num & (1 << bit));
	printf("\n");
}



