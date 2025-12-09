#include<stdio.h>
#include<string.h>
typedef int num;
typedef char string[50];
int main(){
   num age,height;
   string name;
   printf("Enter your name:");
   fgets(name,sizeof(name),stdin);
   name[strlen(name)-1]='\0';
   printf("Enter your age:\n");
   scanf("%d",&age);
   printf("Enter your height:\n");
   scanf("%d",&height);
   printf("\nName: %s\nAge: %d\nHeight: %d\n",name,age,height);
   return 0;
}