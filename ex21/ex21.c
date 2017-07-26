#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
    printf("Max value of int: %d\n",INT_MAX);
    printf("Max value of short: %d\n",SHRT_MAX);
    printf("Max value of long: %ld\n",LONG_MAX);
    printf("Max value of char: %d\n",CHAR_MAX);
    printf("Max value of float: %e\n",FLT_MAX);
    printf("Max value of double: %e\n",DBL_MAX);
    printf("Max value of long double: %Le\n",LDBL_MAX);

    printf("Max value of unsigned int: %u\n",UINT_MAX);
    printf("Max value of 64 unsigned int: %lu\n",UINT64_MAX);
    printf("Max value of 8 unsigned int: %u\n",UINT8_MAX);
}