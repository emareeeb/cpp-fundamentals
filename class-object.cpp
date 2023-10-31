#include<iostream>
using namespace std;

class myClass{
    public:
    int num;
    string str;
};

int main() {
    myClass myObject;

    myObject.num = 99;
    myObject.str = "Areeb Ahmed";

    cout << myObject.num << "\n" << myObject.str << "\n";


}