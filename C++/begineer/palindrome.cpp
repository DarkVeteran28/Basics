#include<iostream>
#include<string>
using namespace std;

bool isPalindrome( string s){
    string filter="";
    for(char c:s){
        if(isalnum(c)){
            filter+=tolower(c);
        }
    }
    string final=filter;
    reverse(final.begin(),final.end());
    return filter==final;    
}
int main(){
    cout<<"Enter the word to check palindrome"<<"\n";
    string word;
    getline(cin,word);
    cout<<boolalpha;
    cout<<isPalindrome(word)<<"\n";
    return 0;
}