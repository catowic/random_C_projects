#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int maxval = 3;
    int minval = 1;
    int randnum = (rand() % (maxval-minval))+minval;
    int wins = 0;
    int losses = 0;
    int tie = 0;
    int choice;

    printf("*** Welcome to Rock/Paper/Scissors ***\n\n");
    do{
        printf("Enter your choice Rock(1) Paper(2) Scissors(3) Quit(0) : ");
        scanf("%d",&choice);
        if (choice == 0 ||choice == 1 || choice == 2||choice == 3){

            if (randnum == choice){
                printf("TIE \n");
                tie++;
            }else if(randnum == 1 && choice == 2){
                printf("WIN \n");
                wins++;
            }else if(randnum == 2 && choice == 3){
                printf("WIN \n");
                wins++;
            }else if(randnum == 3 && choice == 1){
                printf("WIN \n");
                wins++;
            }else{
                printf("LOSE \n");
                losses++;
            }
        }else{
            printf("Invalid choice please try again . \n");
        }
        randnum = (rand() % (maxval-minval))+minval;
    }while(choice != 0);
    printf("Your score is %d\n",wins);
    printf("AI's score is %d\n",losses);
    if (wins>losses)
    {
        printf("You WIN .\n");
    }else if(wins==losses){
        printf("You TIE .\n");
    }else{
        printf("You LOOOOOOSE .\n");
    }

    return 0;
}



