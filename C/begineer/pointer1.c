#include<stdio.h>
void birthday(int* age);
int main(){
    int age=25;
    int *pAge=&age;
    printf("%p (This is original  address)\n",&age);
    printf("%p (This is pointer's address)\n",pAge);
    birthday(pAge);
    printf("You are %d years old\n",age);
            
    return 0;

}
void birthday(int* age){
    //PASS BY REFERENCE
    (*age)++;
};
