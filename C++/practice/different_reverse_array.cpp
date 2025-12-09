#include <iostream>
using namespace std;
int main(){
    int x,arr[100];
    cout<<"Enter the size of array(max: 100)"<<endl;
    cin>>x;
    cout<<"Now enter the elements"<<"\n";
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    int start=0,end=x-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}