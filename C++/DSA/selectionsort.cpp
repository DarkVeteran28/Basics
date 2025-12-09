#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={23,45,45,87,56,98,67};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        int smlindex=i;
        for(int j=i+1; j<n ; j++){
            if(arr[j]<arr[smlindex]){
                smlindex=j;
            }
            
        }
        swap(arr[i],arr[smlindex]);
    }
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}