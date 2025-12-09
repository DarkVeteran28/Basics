#include<stdio.h>

int main(){
    int arr[]= {7,6,2,98,56,73,46};
    int n= sizeof(arr)/sizeof(arr[0]);

   

for(int i=1; i<n; i++){
    int curr= arr[i];
    int prev= i-1;
     while(prev>=0 && arr[prev]>curr){
        arr[prev +1]=arr[prev];
        prev --;
     }
    arr[prev+1]=curr;

}
printf("The sorrted arrays looks like: \n");
for(int i=0; i<n; i++){
    printf("Array [%d]: %d\n",i,arr[i]);
}
}