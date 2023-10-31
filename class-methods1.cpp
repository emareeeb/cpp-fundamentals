/*Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

Inside class definition
Outside class definition
In the following example, we define a function inside the class.

Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):*/

// INSIDE CLASS DEFINATION - function inside a class.
#include <iostream>
using namespace std;

class myclass{
    public:
    void greeting() {
        cout << "Assalamu-Alaikum!" << "\n";
    }
};

int main() {
    myclass myobject;
    myobject.greeting();
}

