#include<iostream>
using namespace std;
int main(){
int x;
int a;
cout<<"Enter A Number for checking digital Root"<<endl;
cin>>x;
if(x==0){
    cout<<x<<"\n";
}
else if(x%9==0){
    cout<<"9"<<"\n";
}
else{
    a=x%9;
    cout<<a<<endl;
}

}