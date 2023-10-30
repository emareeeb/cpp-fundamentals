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

/*A parameter with a default value, is often known as an "optional parameter". From the example above, country is an optional parameter and "Norway" is the default value.*/