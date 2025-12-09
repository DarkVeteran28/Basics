#include<iostream>
#include<string>
using namespace std;
int main(){
    unsigned int x;
    int count=0;
    cout<<"Enter the number"<<endl;
    cin>>x;
    string a=bitset<8>(x).to_string();
    for (int i=0; i<=a.length();i++){
           if(a[i]=='1'){
            count+=1;
           }
    }
    cout<<count<<endl;
}
// popcount(x) function gives the direct setbit count for a given number