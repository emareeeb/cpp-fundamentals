/*
Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.
In the following example, MyGrandChild is derived from class MyChild (which is derived from Me).
*/
#include<iostream>
using namespace std;

// Base class (parent)
class Me {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public Me {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}

