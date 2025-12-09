#include <iostream>
using namespace std;
int linear(int *arr,int n,int target);
int main(){
    cout<< "Enter the size of the array: "<<"\n";
    int size;
    cin>> size;
    int arr[size];
    cout<<"NOw Enter the elements of the array: "<<"\n";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "enter the target element: ";
    int tar;
    cin >> tar;
    int result=linear(arr,size,tar);
    if(result!=-1){
        cout << "The index of the target element is: \n"<< result;
    }
    else{
        cout<<"element is not found";
    }
    return 0;
}
int linear(int *arr,int n,int target){
    for(int i=0; i<n ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}