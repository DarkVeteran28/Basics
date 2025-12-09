#include<iostream>
int factorial(int num);

int main(){
    int fact;
    std::cout << "Enter the value for which you want factorial: " << std::endl;
    std::cin >> fact;
    int ans=factorial (fact);
    std::cout << ans << std::endl;
    return 0;
}
int factorial(int num){
    int result;
    if(num>1){
    result = num*factorial(num - 1);
    }
    else{
        result = num;
    }
    return result;
}