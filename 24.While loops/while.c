#include <stdio.h>
#include <string.h>

int main (){

    // while loops = repeats a section of code possibly unlimited times.
    // WHILE some conditions remain true
    // A while loop might not execute at all

    char name[25];

    printf("\nEnter your name; ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';



    while(strlen(name) == 0){
        printf("You did not enter your name");
        printf("\nEnter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("\nHello %s,!! ", &name);
    printf("How are you?");

    return 0;
}