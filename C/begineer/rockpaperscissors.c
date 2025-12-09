#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getuserchoice();
int getcomputerchoice();
void checkwinner(int userchoice, int computerchoice);

int main(){
    //Rock papers scissors

    srand(time(0));
    printf("**********************************");
    printf("****ROCK PAPERS SCISSORS**********");

    int userchoice=getuserchoice();
    int computerchoice =getcomputerchoice();
    
    switch(userchoice){
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("You chose SCISSORS\n");
            break;
        default:
            printf("wrong option\n");
            break;
        }
        switch(computerchoice){
        case 1:
            printf("Computer chose ROCK\n");
            break;
        case 2:
            printf("Computer chose PAPER\n");
            break;
        case 3:
            printf("Computer chose SCISSORS\n");
            break;
        default:
            printf("wrong option\n");
            break;
        }
    checkwinner(userchoice,computerchoice);

    return 0;
}
int getuserchoice(){
    int choice=0;
    
    do{
         
         printf("Choose Any option from the following:\n1.ROCK\n2.PAPER\n3.SCISSORS\n");
         printf("Enter The option: ");
         scanf("%d",&choice);
    }while(choice<1 || choice>3);

    return choice;
}
int getcomputerchoice(){
    return ((rand()%3)+1);
}
void checkwinner(int userchoice,int computerchoice){
       
       if(userchoice==computerchoice){
        printf("Its a tie");
       }
       else if (userchoice==1&&computerchoice==3 || userchoice==2&&computerchoice==1 || userchoice==3&&computerchoice==2){
        printf("You win");
       }
       else{
        printf("You lose");
       }
}
