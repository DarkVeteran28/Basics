#include<iostream>
using namespace std;
int main(){
    int a = 200;
    int b = 33;
    int c = 500;

    if (a > b && c > a) {
    cout << "Both conditions are true"<<endl;
    }
    if (a > b || a > c) {
    cout << "At least one condition is true"<<endl;
    }
    if (!(a > b)) {
    cout << "a is NOT greater than b"<<endl;
    }
}
