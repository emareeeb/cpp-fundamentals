/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. 
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/

#include<iostream>
using namespace std;

class myclass{
    private:
    int salary;

    public:
    int setSalary(int s){           //setting the salary from outside
        salary = s;
    }

    int getSalary(){                  
        return salary;                         //getting the salary
    }
};

int main() {
    myclass myobject;
    cout << myobject.getSalary() << "\n";             //rubbish value cuz variable salary not set yet. 
    myobject.setSalary(10000);
    cout << myobject.getSalary() << "\n";
}
