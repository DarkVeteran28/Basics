#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    
    //This program is to demonstrate dynamic output
    
    char name[100]="";
    bool iscompetetive=true;
    int age=0;
    float cgpa=0.0f;
    int hack=0;
    double prob=0.0;
    int count=0;
    char iscompetetive_char;
    char wish;
    
    printf("Answer to all the questions asked for completinng the formation of your resume\n"); 
      
    printf("What is your full name:");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    
    printf("What is your age:");
    scanf("%d",&age);
    printf("What is your CGPA:");
    scanf("%f",&cgpa);
    printf("Did you attend any hackathons or competitions related to the respective field your desired with?(y or n)");
    scanf(" %c",&iscompetetive_char);
    
    if(iscompetetive_char=='y'||iscompetetive_char=='Y'){ iscompetetive=true;
        printf("Hmm, that means you strive to become good.Okay, Now tell me, In how many hackathons did u participate:");
        scanf("%d",&hack);
        if(hack>0 && hack>=5){
            
            printf("Congrats, your probability of getting job has increased!!");
            printf("Very well Sir!!");
            prob=(cgpa*5)+hack*7;
        }
        
        else if(hack>0){
            printf("Congrats, your probability of getting job has increased!!");
            prob=(cgpa*5)+hack*6;
        }
        
    else{ iscompetetive=false;
            printf("U would hve had better chance if u had tried to showcase ur skills");
            prob=(cgpa*5);
        }
                    
    }
    prob=prob/10;
    printf("Do you wish to see your probability of getting into our company(y/n)");
    scanf(" %c",&wish);
    if(wish=='y'||wish=='Y'){
        printf("Okay. Thank you for choosing to give interview in our company.\nBased on your accomplishments,\nYour probability is:\n%lf",prob);
    }
    else if(wish=='n'||wish=='N'){
        printf("Thank you for your time.We will get back to you soon enough ");
    }
    return 0;
}