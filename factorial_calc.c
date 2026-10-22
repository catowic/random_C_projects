#include <stdio.h>
/*
Integer limit is breaking the program LOL
- There is nothing I can do
*/
int fibonachi(int n){
    if(n <= 1){
        return n;
    }
    int x=1;
    do{
        x *= n;
        n--;
    } while (n != 0);
    return x;
}

int main(void){
    int num,final;
    printf("Enter your number for factorial : ");
    scanf("%d",&num);
    final = fibonachi(num);
    printf("Your factorial is %d",final);

    return 0;
}