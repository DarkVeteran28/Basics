#include<stdio.h>
int main(){
    int date,month,year;
    printf("Enter date in the form of dd/mm/yyyy\n");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("%d%d%d",year,month,date);
    return 0;
}