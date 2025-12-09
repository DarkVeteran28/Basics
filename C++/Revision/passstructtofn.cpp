#include<iostream>
using namespace std;
struct car{
    string brand;
    int year;
};
void fn(car c){
    cout<<"Brand:"<<c.brand<<"\n"<< "Year:"<<c.year<<"\n";
}
void modify(car &c){ //To modify something, always use it as REFERENCE
    c.year++;
}
int main(){
    car c1={"Maruti", 2007};
    fn(c1);
    modify(c1);
    cout<<"Brand:"<<c1.brand<<"\n"<< "Year:"<<c1.year<<"\n";
    return 0;
}