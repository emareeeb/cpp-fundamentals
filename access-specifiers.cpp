/*
In C++, there are three access specifiers:
1)public - members are accessible from outside the class
2)private - members cannot be accessed (or viewed) from outside the class
3)protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
*/

#include<iostream>
using namespace std;

class myclass{
    public:
    int x;
    private:
    int y;
};

int main() {
    myclass myobject;
    myobject.x = 0;
    // myobject.y = 1;                                   //SHOWS ERROR : y is inaccessible.

    cout << myobject.x << "\n";

}