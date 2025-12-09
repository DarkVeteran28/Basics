#include<stdio.h>
void reverse(int arr[],int n){
    int low=0, high= n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main(){
    int arr[]={1,2,3,4,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    printf("\nThe updated array is as follows: \n");
    for(int i=0; i<n; i++){
        printf("\nArray[%d] = %d\n",i,arr[i]);
    }
    return 0;
}