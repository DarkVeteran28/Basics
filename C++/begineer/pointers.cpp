#include<iostream>
int main(){
    std::string name="Thejas";
    int age= 18;
    std::string languages[]={"C","C++","Python","Java"};
    std::cout<<"Name" << "\t\t" << "Memory Location" << "\n\n" ;
    std::cout << name << "\t\t" << &name << "\n" ;
    std::cout << age << "\t\t"<< &age << "\n";
    std::cout << languages[1] << "\t\t" << languages << "\n"; //Because array itself is already a memory location.
    /* Here &name,&age, languages are pointers, they are actually indicated as
       *pName for &name
       *pAge for &age
       and languages is already a pointer
       */
    return 0;
}