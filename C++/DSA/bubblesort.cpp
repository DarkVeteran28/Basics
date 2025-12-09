#include<iostream>
using namespace std;
int main(){
    cout<<"ENter the length of the array" <<"\n";
    int n;
    cin>> n;
    int arr[n];
    cout<<"ENter the elements: "<<"\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout <<"\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"The updated array is as follows: "<<"\n";
    for(int i=0; i<n ; i++){
        cout<< arr[i] <<"\n";
    }
    return 0;
}