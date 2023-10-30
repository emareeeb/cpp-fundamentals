#include<iostream>
using namespace std;

void myfunction(string first_name, int age){
    cout << first_name << " Ahmed is " << age << " years old.\n";
}

int main() {
    myfunction("Areeb", 19);
    myfunction("Anas", 2);
    myfunction("Arhaan", 10);
}

/*Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.*/