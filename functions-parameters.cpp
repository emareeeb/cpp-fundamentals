#include<iostream>
using namespace std;
/*'
The following example has a function that takes a string called fname as parameter. When the function is called, we pass along a first name, which is used inside the function to print the full name:
*/

void myfunction(string first_name){
    cout << first_name << " Ahmed" << "\n";
}

int main() {
    myfunction("Areeb");
    myfunction("Arhaan");
    myfunction("Anas");
    myfunction("Anwar");
}

/*When a parameter is passed to the function, it is called an argument. So, from the example above: first_name is a parameter, while Areeb, Arhaan and Anas are arguments.*/