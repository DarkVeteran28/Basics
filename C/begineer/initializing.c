#include<stdio.h>
int main(){
    //Alert(bell) \a
    //Backspace   \b
    //New line    \n
    //HOrizontal tab  \t
    //  /"             prints "
    int age=18;
    char name[]="likhith";
    double cgpa=9.876;
    double confidencelvl=100.999999999999999999;
    char favchar='p';
    char nullchar='\0';
    double nullnum=0.0f;
    char nullname="";
    printf("My name is %s\ni am %d years old\nMy CGPA is %.2f.\nMy Confidence level in myself is %.5lf\nMy favourite character is %c\n",name,age,cgpa,confidencelvl,favchar);
    return 0;
}