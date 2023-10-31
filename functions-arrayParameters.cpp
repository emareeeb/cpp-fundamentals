#include <iostream>
using namespace std;

void myfunc(int array[5]){
    for(int i=0; i<5; i++){
        cout << array[i] << "\n";
    }
}

int main() {
    int  myarray[5] = {10,20,30,40,50};
    myfunc(myarray);
}