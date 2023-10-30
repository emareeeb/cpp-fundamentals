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