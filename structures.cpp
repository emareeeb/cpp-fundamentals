#include<iostream>
using namespace std;
int main(){
    struct{
        int mynum;
        string mystring;
    }mystructure;

    mystructure.mynum = 9;
    mystructure.mystring = "Hello Areeb! You made your structure!";

    cout << mystructure.mynum << "\n" << mystructure.mystring;
}