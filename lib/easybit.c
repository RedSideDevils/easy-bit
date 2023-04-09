#include "easybit.h"


void SET_BIT(int *num, int bit_pos)
{
    *num |= (0x01 << bit_pos);
}


void UNSET_BIT(int *num, int bit_pos)
{
    *num &= ~(0x01 << bit_pos);
}


void SHIFT_LEFT_BIT(int *num, int shift_count)
{
    *num = *num << shift_count;
}


void SHIFT_RIGHT_BIT(int *num, int shift_count)
{
    *num = *num >> shift_count;
}


int READ_BIT(int num, int bit_pos)
{
    int bit = num & (0x01 << bit_pos);
    return bit >> bit_pos;
}


void PRINT_BIN(int num)
{
    int binary[32] = {0, }, index = 0;
    
    while (num > 0)
    {
        binary[index++] = num % 2;
        num /= 2;
    }
    
    for (int j = index - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
}