#include<stdio.h>
void dupli(int arr[], int n){
    int freq[100]={0};

    printf("Duplicates: ");
    for(int i=0; i<n; i++){
        if(freq[arr[i]]== 1){
            printf("%d  ", arr[i]);
               
            }
            else{
                freq[arr[i]]++;
            }
        }
       printf("\n"); 
    }
    

int main(){
    int arr[]={ 4,3,2,7,8,2,3,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    dupli(arr,n);
    return 0;
}