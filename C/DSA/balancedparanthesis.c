#include<stdio.h>
#include<string.h>
#define max 100

char stack[max];
int top = -1;

void push(char c){ stack[++top]=c;}
char pop(){ return (top==-1)?'\0' : stack[top--];}
char peek(){
    return (top==-1)? '\0': stack[top];
}
char isEmpty(){
    return (top==-1);
}
int isBalanced(char *exp){
    for(int i=0; exp[i]!='\0'; i++){
        char ch=exp[i];
        if(ch=='{'||ch=='['||ch=='('){
            push(ch);
        }
        else if(ch=='}'||ch==']'||ch==')'){
            if(isEmpty()){
                return 0;
            }
            char topChar=pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '['))
                return 0;
        }
    }
    return isEmpty();

}

int main(){
    char exp[]="{[()]}";
    if(isBalanced(exp)){
        printf("Balanced\n");
    }
    else{
        printf("Not Balanced\n");
    }
    return 0;
}

