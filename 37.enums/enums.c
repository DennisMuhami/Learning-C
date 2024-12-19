#include <stdio.h>

enum day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Sat = 7};
 
int main ()
{
    // enums (enumerations) = a user defined type of named integer identifiers
    //         helps to make a program more readable

    enum day today = Sun;

    printf("%d", today);  // enums are NOT STRINGS, but they can be treated as integers

    if(today == Sun || today == Sat)
    {
        printf("\nIt's the weekend");
    }
    else
    {
        printf("\nI have to work today");
    }

    return 0;
}