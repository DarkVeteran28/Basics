#include<iostream>
using namespace std;
void reverse(int *arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void leftrotation(int * arr, int n,int point);
int main(){
    int arr[]={34,65,23,87,45,90,86};
    int n= sizeof(arr)/sizeof(arr[0]);
    leftrotation(arr,n,4);
    for(int i=0; i<n ; i++){
        cout << arr[i] << "  ";
    }
    return 0;
}
void leftrotation(int * arr, int n,int point){
    reverse(arr,0,point-1);
    reverse(arr,point,n-1);
    reverse(arr,0,n-1);
}
