#include<stdio.h>
void swap(int *a,int *b){
    int temp= *a;
    *a = *b;
    *b=temp;
}
int main(){
    int arr[]={3,9,6,1,2,5};
    int n=6;
    for(int i=0; i<n-1;i++){
        for( int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }

        }
    }
    printf("The updated array is like: ");
    for(int i=0; i<n;i++){
        printf("Array at [%d] is %d \n",i,arr[i]);
    }
    printf("\n");
    return 0;
}
