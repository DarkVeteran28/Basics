#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[100];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    int r=arr[0],t=0;
    for(int i=1; i<x; i++){
        int a=r,b=arr[i];
        while(a!=b){
            if(a>b){
                a-=b;
            }
            else{
                b-=a;
            }
            t++;

        }
        r=a;
    }
    cout<<"GCD is: "<<r<<"No of iterations are: "<<t;
}