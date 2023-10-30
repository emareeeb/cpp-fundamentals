#include<iostream>
using namespace std;
void myfunction( int array[5]){
    for(int i = 0; i<5; i++ ){
        cout << array[i] << "\n";
    }
}

int main() {
    int myarray[5] = {10,20,30,40,50};
    myfunction(myarray);
}