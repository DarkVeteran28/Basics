#include<stdio.h>
#include<math.h>
int main(){
    int input;
    int count;
    int twenty,remain1,remain2,tens;
    printf("Enter the amount you need to withdraw:");
    scanf("%d",&input);
    twenty=input/20;
    remain1=input%20;
    
    tens=remain1/10;
    remain2=remain1%10;
    
    printf("The number of $20 Bills are:%d\nThe number of $10 bills are:%d\nThe number of one bills are:%d",twenty,tens,remain2);
    return 0;

}