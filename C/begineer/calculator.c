#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int choice;

double add(double a,double b){
    double sum=a+b;
    return sum;
} 
double subtract(double a,double b){
    double subt=a-b;
    return subt;
}
double multiply(double a,double b){
    double mult=a*b;
    return mult;
}
double divide(double a,double b){
    double div=a/b;
    return div;
}
double squareroot(double a){
    
    return sqrt(a);
}
double cuberoot(double a){
    double cbu=cbrt(a);
    return cbu;
}
double ci(double p,double r,double t){
    double comp=pow((p*(1+r/100)),t);
    return comp;
}
double si(double p,double r,double t){
    double simp= p*r*t/100;
    return simp;
}
double logo(double x){
    double logoritm=log(x);
    return logoritm;
} 

int main(){
    double a,b,p,r,t,result;
    while(1){
             printf("\nFrom the Drop down menu select what operation ur going to do now:\n1.Add\n2.Subtract\n3.Multiply\n4.Division\n5.Square Root\n6.Cube root\n7.compoundinterest\n8.simpleinterest\n9.Natural logoritm enter 0 to exit");
             
            scanf("%d",&choice);
            switch(choice){    //Enhanced Switch
                case 0: exit(0);   //Forcefully exit the infinite loop
            
                case 1: printf("Enter the two numbers you want to add:");
                        scanf("%lf",&a);
                        scanf("%lf",&b);
                        result=(add(a,b));
                        printf("%lf",result);
                        break;

                case 2: printf("Enter the two numbers you want to subtract:");
                        scanf("%lf",&a);
                        scanf("%lf",&b);
                        result=(subtract(a,b));
                        printf("%lf",result);
                        break;

                case 3: printf("Enter the two numbers you want to multiply:");
                        scanf("%lf",&a);
                        scanf("%lf",&b);
                        result=(multiply(a,b));
                        printf("%lf",result);
                        break;
                        
                case 4: printf("Enter the two numbers you want to Division:");
                        scanf("%lf",&a);
                        scanf("%lf",&b);
                        result=(divide(a,b));
                        printf("%lf",result);
                        break;
                        
                case 5: printf("Enter the number you want Squareroot of:");
                        scanf("%lf",&a);
                        result=(squareroot(a));
                        printf("%lf",result);
                        break;
                        
                case 6: printf("Enter the numbers you want cuberoot of:");
                        scanf("%lf",&a);
                        
                        result=(cuberoot(a));
                        printf("%lf",result);
                        break;
                        
                case 7: printf("Enter principal, then rate and then time to find Compound Interest:");
                        scanf("%lf",&p);
                        scanf("%lf",&r);
                        scanf("%lf",&t);
                        result=ci(p,r,t);
                        printf("%lf",result);
                        break;
                        
                case 8: printf("Enter principal, then rate and then time to find Simple Interest:");
                        scanf("%lf",&p);
                        scanf("%lf",&r);
                        scanf("%lf",&t);
                        result=(si(p,r,t));
                        printf("%lf",result);
                        break;
                        
                case 9: printf("Enter the number you want logoritm of:");
                        scanf("%lf",&a);
                        result=(logo(a));
                        printf("%lf",result);
                        break;

                       
                        
                default: printf("You have chosen the wrong option");
                         break;
            }
        }
        return 0;
    } 
