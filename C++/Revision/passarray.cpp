#include<iostream>
using namespace std;
void myfn(int arr[]){
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
   int mynum[5]={4,7,23,98,45};
   myfn(mynum);
   return 0;

}

