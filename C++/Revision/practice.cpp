#include<string>
#include<iostream>
using namespace std;
int main(){
    string gret="hello";
    char gret2[]="hello";
    string mam="wrv \"Hello\" sd\\we\'r";
    string full=gret + mam + gret2;
    int lengthofinput=full.length();
    cout<<full<<"\n"<<lengthofinput<<"\n"<<full[3]<<"\n";

}