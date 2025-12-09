#include<stdio.h>
int binary(int arr[],int low,int start,int target){
    if(low>start){
        return -1;
    }
    int mid= low + (start-low)/2;
    if(arr[mid]==target){
        return mid;}

    else if(arr[mid]>target){
        return binary(arr,low,mid-1,target);
    }
    else{
         return binary(arr,mid+1,start,target);

    }
    }

int main(){
    int arr[]={2,5,8,9,35,57,89,95};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target= 7;
    int result= binary(arr,0,n-1,target);
    if(result!=-1){
    printf("\n The Target is found at %d \n",result);
    }
    else{
        printf("\n Element not found...... \n\n");
    }
    return 0;

}    
