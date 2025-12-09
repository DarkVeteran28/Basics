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
    for(int i=1; i<n; i++){
        int current=arr[i];
        int previous=i-1;
        while(previous>=0 && arr[previous]>=current){
            arr[previous+1]=arr[previous];  
            previous--;
        }
        arr[previous+1]=current;

    }
    cout << "The sorrted arrays looks like: \n";
for(int i=0; i<n; i++){
    cout << "Array at ["<<i<<"]"<< "is "<<arr[i] <<"\n";
}
}
