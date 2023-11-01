#include<iostream>
using namespace std;
int main() {
    int day;
    cout << "Please enter a number: ";
    cin >> day;
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
        default:      // its always default. Not 'case default'.
            cout << "There are only SEVEN days in a week. It CANT be " << day << "'th day" ;  
            break;                                                                           
    }
}


