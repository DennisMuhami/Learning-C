#include <stdio.h>

int Findmax (int x, int y){

   /* if (x > y){
        return x;
    }
    else{
        return y;
    }
    */

   return (x > y) ? x : y;
}

int main (){

    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    int max = Findmax(3, 4);
    printf("%d", max);

    return 0;
}