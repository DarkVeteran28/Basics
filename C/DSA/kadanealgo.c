#include<stdio.h>
int kadane(int arr[],int n){
    int maxsum=arr[0];
    int currentsum=0;
    for(int i=0; i<n; i++){
        currentsum+=arr[i];
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={-2,-1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Max subarray sum is: %d\n", kadane(arr,n));
    return 0;
}