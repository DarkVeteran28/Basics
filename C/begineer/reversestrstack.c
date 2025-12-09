#include <stdio.h>
#include <string.h>

#define MAX 100
char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }

void reverse(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) push(str[i]);
    for (int i = 0; i < n; i++) str[i] = pop();
}

int main() {
    char str[] = "hello";
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
