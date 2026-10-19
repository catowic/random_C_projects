#include <stdio.h>
#include <Windows.h>

int main(void){

    int seconds,minutes,hours,time;

    printf("Enter time in seconds : ");
    scanf("%d",&time);
    
    do{
        minutes = (time / 60)%60;
        hours = time / 3600;
        seconds = time % 60;
        printf("%02d:%02d:%02d\n",hours,minutes,seconds);
        Sleep(1000);
        time--;
    }while(time != 0);

    return 0;
}