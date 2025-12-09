#include<stdio.h>
#include<stdlib.h>
/*Realloc: Reallocation
           Resize previously allocated memory*/
int main(){
    int number=0;
    printf("Enter no. of grades: ");
    scanf("%d",&number);

    int*grades= malloc(number*sizeof(int));
    if(grades==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0; i<number; i++){
        printf("Enter grade #%d ",i+1);
        scanf(" %d",&grades[i]);
    }
    int newnum=0;
    printf("Enter a new number of prices: ");
    scanf("%d",&newnum);
    int *temp=realloc(grades,newnum*sizeof(int));
    
    if(temp==NULL){
        printf("Could not reallocate\n");
        return 1;
    }
    grades=temp;
    
    for(int i =number; i<newnum;i++){
        printf("Enter price #%d",i+1);
        scanf("%i",&grades[i]);
    }
    printf("\n");

    free(grades);//Returns "rented" memory back to system
    grades=NULL; //Measure against dangling pointers problem.(Kind of returning the key for "rented" memory)
     return 0;
}

