#include<stdio.h>
#include<unistd.h>
int main(){
    for(int i =10;i>0;i--)
    {
       printf("%d\n",i);
       sleep(1);
    }
    printf("\nCountdown is complete\n");
    return 0;
}