#include<iostream>
using namespace std;
class MyClass{      //Class Declaration
    public:         //Access Specifier
    int myNum;      //Attribute 1
    string myString;//Attribute 2
};
int main(){
    MyClass object1;// Creating object from MyClass
    MyClass object2;// Creating Another object from MyClass

    object1.myNum=15; //Passing exempler variables into respective attributes
    object1.myString="First Object";

    cout<<object1.myNum<<"\n";
    cout<<object1.myString<<"\n";

    object2.myNum=16; //Passing exempler variables into respective attributes
    object2.myString="Second Object";

    cout<<object2.myNum<<"\n";
    cout<<object2.myString<<"\n";
    return 0;

}