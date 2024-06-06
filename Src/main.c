/*
 * main.c
 *
 *  Created on: 30 мая 2024 г.
 *      Author: Win_7
 */

#include "bitwise_tools.h"
#include "Exampl_pincode.h"

int main(){
	print_bit(45);
	comparison_numberWithRef(54,BIT_8);
	comparison_numberWithRef(54,BIT_6);

	shiftNUMLeft(16, 1);
	shiftBITLeft(136, 0);
	shiftBITClear(136, 0);

	Ex1(16, 0);
	Ex2(16, 0);
	Ex3(16, 0);

//	uint8_t t8 =1;
//	uint16_t t16 =1;
//	uint32_t t32 =1;
//	uint64_t t64 =1;
//	printf("%i\n",sizeof(t8));
//	printf("%i\n",sizeof(t16));
//	printf("%i\n",sizeof(t32));
//	printf("%i\n",sizeof(t64));

	return 0;
}


//  Работа с указателями
	//(перенести в main )
	//uint32_t g =6;
	//uint64_t *Ptrg = &g;
	//
	//char c = ' ';
	//char *Ptrc = &c;
	//
	//typedef struct {
	//	int a, b ,c;
	//} myStruct;
//myStruct struc;
//myStruct *Ptr_myStr = &struc;
//Ptr_myStr->b = 45;
//printf("Sizeof(*int) = %d\nSizeof(*char) = %d\nSizeof(*str) = %d\n", sizeof(Ptrg), sizeof(Ptrc), sizeof(Ptr_myStr));
//printf("struc.b = %d\n", struc.b);
//printf("%i \n", 34);
//
//printf("%d\n%d\n%d\n%d\n%d\n", Ptrg, Ptrg+1, Ptrg+2, Ptrg+3, Ptrg-1);
//printf("  \n");
//printf("%d\n%d\n%d\n%d\n%d\n", *Ptrg, *Ptrg+1, *(Ptrg+2), *(Ptrg+3), *(Ptrg-1));

