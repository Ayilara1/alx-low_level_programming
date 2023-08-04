#include <stdio.h>
#include "main.h"

int main(void)
{
 	int get_endianness(void);
     	int number;

    number = get_endianness();
    if (number != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
