#include <stdio.h>

int main(void){
    int money = 0;
    int choice;
    int deposit,withdraw;

    printf("*** Welcome to ZekBank ***\n\n");
    do{
        printf("Check balance (1)\n");
        printf("Deposit money (2)\n");
        printf("Withdraw money (3)\n");
        printf("Close the program (0)\n");
        printf("What you want to do : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
            break;
        case 1:
            printf("Your money on the ZekBank is %d\n", money);
            break;
        case 2:
            printf("Enter how much money you are gonna deposit : ");
            scanf("%d",&deposit);
            printf("\n");
            if(deposit<=0){
                printf("You cant enter 0 or negative numbers . \n");
            }else{
                money += deposit;
            }
            break;
        case 3:
            printf("How much money are you gonna withdraw : ");
            scanf("%d",&withdraw);
            printf("\n");
            if(withdraw > money || withdraw <= 0){
                printf("You cant withdraw more than your money .\n");
            }else{
                money -= withdraw;
            }
            break;
        default:
            printf("Invalid please enter a valid number (0,1,2,3) \n");
            break;
        }
        printf("\n");
    }while(choice != 0);

    printf("Have good day .");

    return 0;
}