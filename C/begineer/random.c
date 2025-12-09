#include<stdio.h>
#include<stdlib.h>
#include<time.h>
                       //PSEUDO RANDOM NUMBER
int main(){
    int max=100;
    int min=50;
    srand(time(0));  //Seed value of current time,Because wihtout this we can get same random number everytime
    int x=(rand()%(max-min+1)+min);
    printf("%d\n",x);
    return 0;
}