#include<stdio.h>
#include<stdlib.h>
void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    //Banking program
    int choice=0;
    float balance=0.0f;

    printf("**********WELCOME TO BANK**************");
    do{
       printf("\nChoose one option:\n");
       printf("1.Check Balance\n");
       printf("2.Deposit\n");
       printf("3.withdraw\n");
       printf("4.To exit\n");
       printf("Enter your choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
        case 1:
                checkbalance(balance);
                break;
        case 2:
                balance+=deposit();
                break;
        case 3:
                balance-=withdraw(balance);  
                break;
        case 4:
                exit(0);  
        default:
                printf("\nInvalid input, Select 1-4");
                                           
        
        }


    }while(choice!=4);
    return 0;
}
void checkbalance(float balance){
    printf("\nYour current balance is: $%.2f\n",balance);
};
float deposit()
{
    float amount=0.0f;
    printf("Money to be deposited: $");
    scanf("%f",&amount);
    if(amount<0){
        printf("Enter valid amount?");
        return 0.0f;
    }
        
    
    else{
        printf("Successfully deposited $%f",amount);
        return amount;
    }
    
    
   
};
float withdraw(float balance){
    float gone=0.0f;
    printf("Enter money to be withdrawn:");
    scanf("%f",&gone);
    if(gone>balance){
        printf("Insufficient balance!!");
        return 0.0f;
    }
    else{
        printf("Successfully withdrawn $%f",gone);
        return gone;
    }
    
};