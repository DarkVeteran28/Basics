#include<stdio.h>
int main(){
    printf("Enter the length of array:"); //Dynamic allocation of length of array
    int n;
    
    scanf("%d",&n);
    int arr[n];
    printf("Now the enter the elements of array: ");
    for(int i=0; i<n;  i++){
        scanf("%d",&arr[i]); //To fill the array
    }
    printf("The array is as follows: \n");
    for(int i=0; i<n;i++){
        printf("Array[%d]: %d\n",i,arr[i]); //To print the array
    }
    return 0;

}