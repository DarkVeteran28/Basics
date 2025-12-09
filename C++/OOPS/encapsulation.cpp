#include<iostream>
using namespace std;
/*The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.*/
class Employee{
    private:
    int salary;  //PRivate attribute

    public:
    void setsalary(int s){ //Setter
        salary=s;
    }
    int getsalary(){ //Getter
        return salary;
    }
};
int main(){
    Employee manoj;
    manoj.setsalary(50000);
    cout<< "Manoj Salary is: " <<manoj.getsalary()<<endl;
    return 0;
}

/* salary is private - it cannot be accessed directly
   setSalary() sets the value
   getSalary() returns the value. */