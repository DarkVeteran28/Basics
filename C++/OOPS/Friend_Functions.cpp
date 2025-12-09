#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    Employee(int s){
        salary=s;
    }

    friend void displaysalary(Employee emp);
};
void displaysalary(Employee emp){
    cout<<"Salary is: "<<emp.salary<<endl;
}
int main(){
   Employee bro(900000);
   displaysalary(bro);
   return 0;
}