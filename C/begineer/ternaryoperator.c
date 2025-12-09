#include<stdio.h>
#include<math.h>
int main(){
    int input;
    printf("\nEnter a number to presume if it is a even number or a odd number\n");
    scanf("%d",&input);
    printf(("%s",(input%2==0))?"\nIt is a even Number....\n":"\nIt is a odd number.....\n");
    return 0;
}