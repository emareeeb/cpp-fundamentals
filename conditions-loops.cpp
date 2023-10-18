//for sometime lets assume theres no user inputs and we define stuff.

#include<iostream>
#include<string>                //for the string length problem.
using namespace std;
int main() {
    int x=10,y=20;
    if(x>y){
        cout << "X is greater than Y.";
    }else{
        cout << "Y is greater than X.";
    }

    cout << "\n\n";
    //similarly you can also add ' else if { //condition; } ' in-btwn if and else statements if there are more conditions to state.


/*
PROBLEM : lets do this. User enters 2 strings and the computer says which string's length is more.
*/
    string A,B;
    cout << "Please enter your String(1): ";
    getline(cin,A);
    cout << "Please enter your String(2): ";
    getline(cin,B);

    if(A.length() > B.length()){
        cout << "String(1) is longer.";
    }else if(B.length() > A.length()){
        cout << "String(2) is longer.";
    }else{
        cout << "Both the Strings are of same length.";
    }

/*Switch statements*/

    int day = 10;
    switch(day){
        case 1: 
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "there are only seven days in a week. It cant be " << day << " days";
            break;
        
    }







}



