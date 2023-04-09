#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "lib/easybit.h"

int main()
{       
    int num = 7;            
    PRINT_BIN(num);         // 111
    UNSET_BIT(&num, 0);     
    PRINT_BIN(num);         // 110
    SET_BIT(&num, 0);       
    PRINT_BIN(num);         // 111
    int bit1 = READ_BIT(num, 0);    
    printf("%d", bit1);     // 0
    return 0;
}


