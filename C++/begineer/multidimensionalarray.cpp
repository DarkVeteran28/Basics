#include<iostream>
using namespace std;
int main(){
    std::string cars[][3]={{"corvette","2007","1200HP"},
                          {"Camero","2002","1500HP"},
                        {"maruti suzuki swift","2012","900HP"}};
                        /*There is  no constraint for 
                         how many cars we are adding,
                        just only 3 columns are allowed.
                        THIS IS MULTIDIMENSIONAL ARRAY*****/

    cout << cars[0][0]<< " ";
    cout << cars[1][1]<< " ";
    cout << cars[2][2]<< "\n" ;

    return 0;
}