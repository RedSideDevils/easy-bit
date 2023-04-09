
# EasyBit lib 

Just a simple lib for working with bits made for C 


## Run Locally

Clone the project
```bash
  git clone https://github.com/RedSideDevils/easy-bit.git
```

Go to the project directory
```bash
  cd easy-bit
```

Build Project
```bash
  cd lib
  gcc -c easybit.c
  ar rcs libeasybit.a easybit.o
  cd ..
  gcc -Wall -Werror -g -I./lib -L./lib main.c -leasybit -o program
```

Run Porject
```
./program 
```

Test
```C
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
```
