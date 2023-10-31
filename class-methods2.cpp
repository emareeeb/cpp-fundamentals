/*To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:
*/

// OUTSIDE CLASS DEFINATION : FUNCTION DECLARED IN CLASS BUT DEFINED OUTSIDE THE CLASS.

#include<iostream>
using namespace std;

class myclass{
    public:
    void greeting();
};

void myclass::greeting() {
    cout << "Hello! Assalamu-Alaikum!" << "\n";
}

int main(){
    myclass myobject;
    myobject.greeting();
}