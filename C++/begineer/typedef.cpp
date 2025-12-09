#include<iostream>
#include<vector>
using namespace std;

//We can use typedef to define our desirable name for data types.
typedef vector < pair < string , int >> pairlist_t;
typedef string text_t;
// "using" keyword can also do the same.
using num_t=int;
using print=ostream;
using input=istream;
int main(){
    num_t a{5};
    text_t name {"sumanth"};
    
    cout << name << "Is "<< a << " years old" ;
    return 0;
}
