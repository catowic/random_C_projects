#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(0));
    
    int maxval = 100;
    int minval = 1;
    int randnum = (rand() % (maxval-minval))+minval;
    int guesses = 0;
    int tries = 0;
    int guess = 0;

    printf("*** Welcome to my Game ***\n");
    do{
        tries++ ;
        printf("Guess the number 1 - 100 : ");
        scanf("%d", &guess);
        if (guess > randnum)
        {
            printf("TOO HIGH\n");
        }
        else if(guess < randnum){
            printf("TOO LOW\n");
        }
        else{
            printf("Your Answer Is CORRECT\n");
            printf("You took %d tries",tries);
        }
    }while (guess != randnum);
    
    return 0;
}