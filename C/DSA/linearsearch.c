#include<stdio.h>
#include<stdlib.h>

int linear(int arr[], int n, int target){
    for(int i=0; i<n ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,x;
    printf("Enter your array length : ");
    scanf("%d",&n);  
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        printf("Array[%d]= ",i);
        scanf("%d",&arr[i]);
    } 
    printf("Enter the element to be found: ");
    scanf("%d",&x);
    
    int result= linear(arr,n,x);
    if(result!=-1)
      printf("Element found at index %d\n",result);
    else
      printf("Element not found\n");

      return 0;


}
