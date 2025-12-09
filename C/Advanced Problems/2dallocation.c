#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int rows,columns,i,j;
    int **matrix;

    printf("Enter Number of Rows: ");
    scanf("%d",&rows);
    
    printf("Enter Number of Columns: ");
    scanf("%d",&columns);

    //Rows

    matrix= (int **)malloc(rows * sizeof(int));
    if(matrix==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    //Columns
    for(i=0; i<rows; i++){
        matrix[i]=(int*)malloc(columns*sizeof(int));
        if(matrix[i]==NULL){
            printf("Mermory allocation failed ");
            for(j=0;j<i;i++){
                free(matrix[j]);
            }
            free(matrix);
            return 1;
        }

    }
    //Printing
    printf("Enter elements of the matrix: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++){
            printf("Element[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe Matrix is: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    //Freeing memory
    for(i=0;i<rows;i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}