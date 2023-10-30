#include<iostream>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();                         //since the argument is not passed the default parameter ("Norway") istaken as an argument.
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA