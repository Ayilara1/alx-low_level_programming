
aniekeme112
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x14-bit_manipulation/0-main.c
@aniekeme112
aniekeme112 Add files via upload
 1 contributor
26 lines (21 sloc)  446 Bytes
#include <stdio.h>
#include "main.h"

/**
* main - check the code
* Return: Always 0.
*/

int main(void)

{

    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
