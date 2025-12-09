#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number to  find is it near prime or not(Divisor check: 4)"<<endl;
    int x;
    cin>>x;
    int count=0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==4){
        cout<<"It is near prime"<<endl;
    }
    else{
        cout<<"Not near prime"<<endl;
    }
    return 0;
}
