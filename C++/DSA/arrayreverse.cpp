#include<iostream>
using namespace std;
void reverse(int *arr,int n);
int main(){
    int size;
    cout << "Enter the size of array: \n";
    cin >> size;
    int arr[]{size};
    cout << "Enter the Elements of array: \n";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "\n";
    reverse(arr,size);
    cout << "The updated array is as follows: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << "\n";
    }
    return 0;
}
void reverse(int *arr,int n){
    int start=0,end=n-1;
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
