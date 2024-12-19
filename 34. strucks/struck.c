#include <stdio.h>
#include <string.h>


struct Player
{
    char name[15];
    int score;
};


int main ()
{
    // Struck (structure) = collection of related members ("variables")
    //          They can be of different data types
    //          Listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but not methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Dennis");
    player1.score = 4;

    strcpy(player2.name, "Lenny");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
    
    return 0;
}
