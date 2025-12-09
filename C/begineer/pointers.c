#include<stdio.h>
int main(){
    int hours,minutes;
    printf("Enter hours:");
    scanf("%d",&hours);
    printf("Enter minutes:");
    scanf("%d",&minutes);
    char *meridiem= (hours<12)?"AM":"PM";
    printf("%02d:%02d %s\n",hours,minutes,meridiem);
    return 0;

}