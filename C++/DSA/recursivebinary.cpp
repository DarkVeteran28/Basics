#include<iostream>
using namespace std;
int binary(int *arr,int low,int high,int target);
int main(){
    int arr[]={23,34,45,56,45,78,98};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tar=45;
    int result=binary(arr,0,n-1,tar);
    if(result!=-1){
        cout<< "The index of the target is: "<<result<<"\n";
    }
    else{
        cout<<"Element not found"<<"\n";
    }
    return 0;
}
int binary(int *arr,int low,int high,int target){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(arr[mid]>target){
            return binary(arr,low,mid-1,target);
        }
        else{
            return binary(arr,mid+1,high,target);
        }
    }
    else{
        return -1;
    }
}