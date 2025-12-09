#include<stdio.h>
#define freezing_pt 32.0f
#define scale_factor (5.0f/9.0f)

int main(void){
    float farenheit,celsius;
    printf("Enter farenheit temperature");
    scanf("%f",&farenheit);
    celsius=(farenheit-freezing_pt)*scale_factor;
    printf("celsius equivalent:%.2f\n",celsius);
    return 0;

    
}