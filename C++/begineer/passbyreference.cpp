#include<iostream>
void reverse(int *arr,int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp= arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start ++;
        end --;
    }
    
}
int main(){
    int arr[]={67,56,45,89,23,56};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int i=0; i<n; i++){
        std::cout << "Array " << i << "  is " << arr[i] << std::endl; 
    }
    return 0;
}

