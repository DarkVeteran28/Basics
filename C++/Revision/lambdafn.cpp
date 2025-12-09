#include<iostream>
using namespace std;
int main() {
  auto message = []() { //Empty eithout parameters
    cout << "Hello World!\n";
  };

  message();
  
  auto add = [](int a, int b) {
    return a + b;     //With parameters
  };

  cout << add(3, 4);
  return 0;
}