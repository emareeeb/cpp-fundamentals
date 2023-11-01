#include<iostream>
using namespace std;
int main() {
    int num[2] = {100,200};
    //to print this array we can follow the long method manually : 
    cout << num[0] << "," << num[1];

    cout << "\n\n";

    /*LOOPING THROUGH AN ARRAY*/
    string cars[5] = {"Cardiallac", "Mahindra", "Ford", "Tata", "Tesla"};
    
    for(int i = 0; i < 5; i++){
        cout << cars[i] << "\n";
    }

    cout << "\n\n";

      //printing serial number wise with the value of that indes in the array:
    for(int x = 0; x < 5; x++){
        cout << x << " = " << cars[x] <<"\n";
    }

    cout << "\n\n";
}
