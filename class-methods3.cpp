/* in the functions you are creating inside/outside the class; you can also add parameters and pass arguments in the functions.*/

#include<iostream>
using namespace std;

class myclass{
    public:
    int speed(int max_speed);
};

int myclass::speed(int max_speed){
    return max_speed;
}

int main(){
    myclass myobject;
    cout << myobject.speed(300);
}