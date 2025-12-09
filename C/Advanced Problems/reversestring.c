#include<stdio.h>
#include<string.h>
void reversestring(char *str){
    char *start=str;
    char *end=str;

    while(*end != '\0'){
        end++;
    }
    end--;

    while(start<end){
        char temp=*start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main(){
    char str[100];
    
    printf("Enter a string to get it reversed:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';

    reversestring(str);

    printf("Reversed String Is: %s",str);
    return 0;
}