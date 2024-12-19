#include <stdio.h>

int main ()
{
    // Bitwise operators = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    //  & = and
    //  | = or
    //  ^ = xor
    //  <<  left shift
    //  <<  right shift

    int x = 6;  // 6 = 00000110
    int y = 12; //12 = 00001100
    int z = 0;  // 0 = 00000000

    // And = 4 ;   4 = 00000100 

    z = x & y;
    printf("AND = %d\n", z);

    return 0;
}