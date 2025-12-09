#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,count;
    count=0;
    cout<<"Enter the lower range and the upper range"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Enter 2 numbers to check the divisibility with: "<<endl;
    cin>>c;
    cin>>d;

        for(int i=a; i<=b; i++){
            if(i%c==0 and i%d==0){
                continue;
            }
            else if (i%c==0 or i%d==0)
            {
                count+=i;
            }
            
       
    }
    cout<<count<<endl;
    
}