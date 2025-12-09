#include<stdio.h>

void swap(int *a,int *b){
    int temp= *a;
    *a = *b;
    *b=temp;
}  
int main(){
    int arr[]={3,6,5,8,4,9};
    int n=6;

    for(int i=0; i<n-1; i++){
        int smlindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[smlindex])
              {
                  smlindex=j;
              }
         }
        swap(&arr[i],&arr[smlindex]);        
    printf("The updated array is: ");
    for(int i=0; i<n;i++){
    printf("Array[%d] is %d \n",i,arr[i]);
    }
    }
    return 0;
}