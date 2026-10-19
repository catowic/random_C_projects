#include <stdio.h>

int main(void){

    int count1 = 1;
    int count2 = 1;
    int num;

    while(count1 < 11){
        while(count2 < 11){
            num = count1 * count2 ;
            printf("%2d ",num);
            count2++;
        }
        printf("\n");
        count1++;
        count2 = 1;
    }
    return 0;
}