#include<bits/stdc++.h>
using namespace std;
void generatecases( vector<char>&nums, int index, vector<char>& current){
    if(index == nums.size()){
        for(char x:current)cout<<x<<" ";
        cout <<'\n';
        return;
    }

    current.push_back(nums[index]);
    generatecases(nums, index+1, current);

    current.pop_back();
    generatecases(nums, index+1, current);

       
}
int main(){
    
    vector<char>nums={'a','b','c'};
    vector<char>current;
    generatecases(nums,0,current);
}


