#include<stdio.h>
#include<stdlib.h>
/*calloc: Contiguos Allocation
          Allocates memory dynamically and sets all allocated bytes to 0
          Malloc is faster but calloc is leads to less bugs*/
int main(){
    int number=0;
    printf("Enter no. of grades: ");
    scanf("%d",&number);

    char*grades= calloc(number,sizeof(char));
    if(grades==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0; i<number; i++){
        printf("Enter grade #%d ",i+1);
        scanf(" %c",&grades[i]);
    }
    for(int i=0;i<number;i++){
        printf("%c  ",grades[i]);
    }
    printf("\n");

    free(grades);//Returns "rented" memory back to system
    grades=NULL; //Measure against dangling pointers problem.(Kind of returning the key for "rented" memory)
    return 0;
}