#include<stdio.h>
void swap(int *a,int *b, int n){
    for(int i=0; i<n; i++)
    {
        int temp = *(a+i);
        *(a+i)=*(b+i);
        *(b+i)=temp;
    }
}

int main(){
    int n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);

    int arr1[n],arr2[n];
    
    printf("Enter the elements of the first array: ");
    
    for(int i=0; i<n; i++)
      scanf("%d",&arr1[i]);

    printf("Enter the elements of the second array: ");
    for(int i=0; i<n; i++)
      scanf("%d",&arr2[i]);

    swap( arr1, arr2, n);
    
    printf("\nAfter Swapping\n");

    printf("The first Array: ");
    for(int i=0; i<n; i++)
      printf("%d\t",arr1[i]);

    printf("The second Array: ");
    for(int i=0; i<n; i++)
      printf("%d\t",arr2[i]);

      printf("\n");

      return 0;

    
}