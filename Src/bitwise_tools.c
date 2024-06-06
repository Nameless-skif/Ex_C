/*
 * bitwise_tools.c
 *
 *  Created on: 6 июн. 2024 г.
 *      Author: Win_7
 */
#include "bitwise_tools.h"


void print_bit(unsigned char num)
{
	printf("%i: ", num);
	printf("%i", (num & BIT_8) ? 1:0);
	printf("%i", (num & BIT_7) ? 1:0);
	printf("%i", (num & BIT_6) ? 1:0);
	printf("%i", (num & BIT_5) ? 1:0);
	printf("%i", (num & BIT_4) ? 1:0);
	printf("%i", (num & BIT_3) ? 1:0);
	printf("%i", (num & BIT_2) ? 1:0);
	printf("%i\n", (num & BIT_1) ? 1:0);

}

void comparison_numberWithRef(unsigned char num, unsigned char ref)
{   //сравнивает число с другим числом
	// дл€ примера:
	// num = 54, 0x36, 00110110

	if((num & ref) == ref){
		printf("Correct\n");
	}
	else
		printf("Nope\n");
}

void shiftNUMLeft(unsigned char num, unsigned char bit){
	// 1 - число, 2 - на сколько бит сдвигаетс€
	// —двигаетс€ все число, а не отдельный бит
	// 2, 0x02, 0b00000010
	print_bit(num);
	print_bit(num<< bit);
	printf("\n");
}

void shiftNUMRight(unsigned char num, unsigned char bit){
	// 1 - число, 2 - на сколько бит сдвигаетс€
	// 2, 0x02, 0b00000010
	print_bit(num);
	print_bit(num >> bit);
	printf("\n");
}

void shiftBITLeft(unsigned char num, unsigned char bit){
	//¬ыставление отдельного бита в заданном числе(без обнулени€)
	print_bit(num);
	print_bit( num | (1 << bit));
	printf("\n");
}

void shiftBITClear(unsigned char num, unsigned char bit){
	print_bit(num);
	print_bit( (num & 0) | (1 << bit));
	printf("\n");
}

void Ex1(unsigned char num, unsigned char bit){
	print_bit(num);
	print_bit(num &~ (1 << bit));
	printf("\n");
}

void Ex2(unsigned char num, unsigned char bit){
	print_bit(num);
	print_bit(num ^ (1 << bit));
	printf("\n");
}

void Ex3(unsigned char num, unsigned char bit){
	print_bit(num);
	print_bit(num & (1 << bit));
	printf("\n");
}
