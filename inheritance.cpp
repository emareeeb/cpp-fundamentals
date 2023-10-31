/*In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):*/

#include<iostream>
using namespace std;

class vehicle{                           //PARENT class
    public:
    string brand = "Ford";
    void horn(){
        cout << "beep beeeep!" << "\n";
    }
};

class car: public vehicle{                        // base class .i.e. inheriting the parent class properties
    public:
    string model = "Mustang";
};

int main() {
    car mycar;
    mycar.horn();
    cout << mycar.brand << " " << mycar.model;
}
