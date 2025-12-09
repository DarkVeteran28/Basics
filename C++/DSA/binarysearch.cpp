#include<iostream>
using namespace std;
int binary(int *arr,int n,int target);
int main(){
    int size;
     cout << "Enter the size of the array" << "\n";
     cin >> size;
     int arr[size];
     cout << "now enter the elements of the array" << "\n";
     for(int i=0; i<size; i++){
        cin >> arr[i];
     }
     cout << "Your array is as follows" << "\n";
     cout << "{";
     for(int i=0; i<size ; i++){
        cout << arr[i] << " ";
     }
     cout << "}";
     cout << "\n Enter the target element: ";
     int tar;
     cin >> tar;
     int result=binary(arr,size,tar);
     if(result!=-1){
     cout << "The index of the target element is: " << result<<"\n";
     }
     else{
        cout << "The element is not found"<< "\n";
     }
     return 0;
}
int binary(int *arr,int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+ (high-low)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
