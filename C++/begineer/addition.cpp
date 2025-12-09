#include<iostream>
int addnumbers(int a, int b){
    int sum = a+b;
    return sum;
}
int main(){
    int first_num,second_num;
    std::cout <<"Enter the first Number " << std::endl;
    std::cin >> first_num;
    std::cout <<"Enter the second Number " << std::endl;
    std::cin >> second_num;
    int sum=addnumbers(first_num,second_num);
    std::cout <<"The sum is:\n" << sum << std::endl;
    return 0;
}