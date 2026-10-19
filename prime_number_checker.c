#include <stdio.h>

int main(void){

    int isPrime = 1;
    int number;

    printf("Enter a number : ");
    scanf("%d",&number);
    printf("1 ");
    for(int i= 2;i < number; i++){
        if (number % i == 0)
        {
            isPrime = 0;
            printf("%d ",i);
        }
        
    }
    printf("%d",number);
    printf("\nThis numbers isPrime value is : %d",isPrime);

    return 0;
}