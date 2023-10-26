#include<iostream>
using namespace std;
int main() {

    for(int i=0; i<=10; i++){
        if(i==5){
            break;
        }
        cout << i << "\n";
    }

    cout << "\n\n";

    for(int i=0; i<=10 ; i++){
        if(i==3){
            continue;
        }
        cout << i << " ";
    }

    cout << "\n\n";


    /*Using break; and continue; in a user input program where the program ends on entering 3 ---> creating using while loop.*/ 
    int num;
    cout << "Lets play a game.\n\n";
    while(num != 3){
        cout << "Please enter a number from 1 - 10 : ";
        cin >> num;
    }
    cout << "Program terminated.";

    cout << "\n\n";

    


}