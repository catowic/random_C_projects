#include <stdio.h>

int main(void){
    int choice;
    float firstnum,secnum,total ;
    
    printf("1 = +\n2 = -\n3 = *\n4 = /\n");
    printf("What expration you need : ");
    scanf("%d", &choice);
    printf("First number : ");
    scanf("%f", &firstnum);
    printf("Second number : ");
    scanf("%f", &secnum);

    switch (choice)
    {
    case 1:
        total = firstnum + secnum;
        printf("Your total is %.2f\n",total);
        break;
    case 2:
        total = firstnum - secnum;
        printf("Your total is %.2f\n",total);
        break;
    case 3:
        total = firstnum * secnum;
        printf("Your total is %.2f\n",total);
        break;
    case 4:
        total = firstnum / secnum;
        printf("Your total is %.2f\n",total);
        break;
    default:
        printf("Secim hatalı . \n");
        break;
    }



    return 0;
}