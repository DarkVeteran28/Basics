#include<stdio.h>
#include<stdlib.h>

int binary(int arr[], int n, int target){
    int low=0, high=n-1;
    while(low<=high){
        int mid =low + (high - low)/2 ;
        if(arr[mid]==target)
          return mid;
        
        else if(arr[mid]<target)
          low=mid+1;
        else 
          high=mid-1;  
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

    int result= binary(arr,n,x);
    if(result!=1){
      printf("Element found at index %d\n",result);
    }
    else {
      printf("Element not found ");
      return 0;
    }
}