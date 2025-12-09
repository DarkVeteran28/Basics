#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&columns);
    int matrix1[rows][columns];
    int matrix2[rows][columns];
    int sum[rows][columns];
    printf("Enter values for first matrix: ");
    for(int i =0; i<rows ; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter values for Second matrix: "); 
    for(int i =0; i<rows ; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&matrix2[i][j]);
        } 
    }
    printf("The sum is:\n");
    for(int i =0; i<rows ; i++){
        for(int j=0; j<columns; j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    for(int i =0; i<rows ; i++){
        for(int j=0; j<columns; j++){
            printf("%d",sum[i][j]);
        }
    }
        printf("\n");
        

    }
    return 0;
}