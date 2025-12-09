#include<iostream>
using namespace std;
int main(){
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food
    string* pointer= &meal; //Pointer storing value of memory address of food
    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; // Outputs Burger
cout << meal << "\n"; // Outputs Burger
cout << &meal << "\n"; // Outputs Burger address
cout << &food << "\n"; // Outputs Burger address
cout << pointer << "\n";  //REFERENCE
cout << *pointer << "\n";  //DEREFERENCE
*pointer="tikka";
cout << *pointer << "\n";

int* ptr= new int; //Allocation of. arandom memory for ptn
cout<<ptr<<"\n";
delete ptr;

}