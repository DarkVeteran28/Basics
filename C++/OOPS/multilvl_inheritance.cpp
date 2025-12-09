#include<iostream>
using namespace std;
class myself{
    public:
    void myfn(){
        cout<<"I am parent Class"<<"\n";
    }
};
class mychild:public myself{};
class mygrandchild: public mychild{};
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class."<<"\n" ;
    }
};
class mychild2: public myself, public MyOtherClass{};

int main(){
    mygrandchild obj1;
    obj1.myfn();
    mychild2 myobj2;
    myobj2.myfn();
    myobj2.myOtherFunction();

    return 0;
}