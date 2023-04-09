// ==== Made by Trippingcarpet ====
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef EASYBIT_H
#define EASYBIT_H

void SET_BIT(int *num, int bit_pos);
void UNSET_BIT(int *num, int bit_pos);
void PRINT_BIN(int num);
void SHIFT_LEFT_BIT(int *num, int shift_count);
void SHIFT_RIGHT_BIT(int *num, int shift_count);
int  READ_BIT(int num, int bit_pos);

#endif