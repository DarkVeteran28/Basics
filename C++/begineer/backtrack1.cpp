#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void build (string v,string current,int length){
    if(current.size()==length)
    {
        cout << current << " ";
        return;
    }
    for(char ch:v){
        current.push_back(ch);
        build(v,current,length);
        current.pop_back();
    }
}
int main(){
    string letters="abc";
    build(letters,"",3);
}