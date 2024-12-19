#include <stdio.h>

int main ()
{

    // Memory = an array of bytes within RAM (street)
    // Memory block = a single unit (byte) within memory, used to hold some value (person)
    // Memory address = the address of where a memory block is located (House address)

    char a = 'x';
    char b = 'y';
    char c = 'z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    //format specifier = %p --> to check memory block

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);   //Hexadecimal values (0-9, A-F)

    return 0;
}
