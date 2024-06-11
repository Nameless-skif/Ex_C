/*
 * Exampl_pincode.c
 *
 *  Created on: 6 июн. 2024 г.
 *      Author: Win_7
 */

#include "Exampl_pincode.h"

// 1 2 3 A
// 4 5 6 B
// 7 8 9 C
// D 0 E F
//
// На вход приходит по 4 символа от 0 - F (каждый символ по 4 бита)
// 1234 - [0001][0010][0011][0100] = 2 bytes
//   		 0	   1    2      3
// 	 	  [0010][0100][0001][0011]
//		     1     3     0     2
// 4 bytes - 2 = 2

//input  = 2 bytes - pwd
