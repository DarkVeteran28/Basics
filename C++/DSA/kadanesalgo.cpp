#include<iostream>
using namespace std;
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
    int arr[]={4,67,85,45,63,56,78,53,24};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=kadane(arr,size);
    cout << result;
    return  0;
}