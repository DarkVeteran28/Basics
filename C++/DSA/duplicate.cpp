#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
    int freq[100]={0};
    cout << "Duplicates: \n";
    for(int i=0; i<n; i++){
        if(freq[arr[i]]==1){
            cout << arr[i] << endl;
            freq[arr[i]]++;
        }
        else{
            freq[arr[i]]++;
        }
    }
    cout << "\n";

}
int main(){
    int arr[]={2,2,2,2,6,6,4,4,7,3,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    duplicate(arr,n);
    return 0;
}