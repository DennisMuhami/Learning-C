#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    //seed random number
    srand(time(0));

    //Generates random number between MIN and MAX
    answer = (rand() % MAX) + MIN;
       //printf("%d\n", answer);

    do{
        printf("Enter a guess:");
        scanf("%d", &guess);

        if(guess > answer)
        {
            printf("Too high!\n");
        }
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT\n");
        }

        guesses++;

    }while (guess != answer);

    printf("*****************************\n");
    printf("answer :%d\n", answer);
    printf("guesses :%d\n", guesses);
    printf("*****************************\n");

    return 0;
}
