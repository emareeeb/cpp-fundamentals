#include<iostream>
using namespace std;

/* FUNCTIONS : (1)declaration (2)defination (3)calling*/

void myFunction() {                                                    //declaration + defination
    cout << "Called my function yay!" << "\n\n";
}                         
void greeting();                                                      //declaration

int main() {
    myFunction();      //calling 
    myFunction();         //calling
    myFunction();      //calling

    greeting();           //calling
}
//call
void greeting() {                                     //defination
    cout << "Hello! AssalamuAlaikum WRWB!";
}

//user defined functions HAVE TO BE declared BEFORE int main() ONLY.
//How ever you can simply declae first and define anywhere and call in int main() meanwhile. like we have made function : 'greeting' here.