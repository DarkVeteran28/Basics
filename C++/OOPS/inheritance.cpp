/* Inheritance allows one class to reuse attributes and methods from another class.
   It helps you write cleaner, more efficient code by avoiding duplication.*/

#include<iostream>
using namespace std;
class vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<< "Wonk!! Wonk!!\n";
    }
};
class car: public vehicle{
    public:
    string model="Mustang";
};
int main(){
    car car1;
    car1.honk();
    cout<<car1.brand + " "+car1.model<<endl;
    return 0;

}
