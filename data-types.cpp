//int float double char bool string
#include<iostream>
using namespace std;
int main() {
    int num = 10;
    float decimal_lessprecision = 9.99;
    double decimal_moreprecesion = 7.99;
    char letter = 'A';
    string name = "Areeb";

    //now we print them all : 
    cout << "the number of int is : " << num << "\n";
    cout << "float is : " << decimal_lessprecision<< "\n";
    cout << "double is : " << decimal_moreprecesion<< "\n";
    cout << "Single character We've chosen is : " << letter<< "\n";
    cout << "Name of our hero which is string is : " << name<< "\n";


    // check out boolean
    bool fishtasty = true;
    bool pizzatasty = false;

    cout << fishtasty;
    cout << "\n";
    cout << pizzatasty;
}