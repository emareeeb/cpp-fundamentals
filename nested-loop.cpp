#include <iostream>
using namespace std;
int main() 
{

    /*bolne ki baat : IN A NESTED LOOP, 
    THE OUTER LOOP IS EXECUTED Once --> passes onto the inner loop --> the inner loop GETS EXECUTED FULLY UNTILL the break condition is met and then  returns back to the outer loop.
    
    inner waala poora khatam hona execute hoke all test cases then it moves on to the outer loop again making a circle.*/

    
    for(int i = 1; i<=2 ; ++i){
        cout << "Outer Loop: " << i << "\n";   // Executes 2 times

        for( int j=1; j<=3; ++j){
            cout << " Inner Loop: " << j << "\n";  // Executes 6 times (2 * 3)
        }
    }


}
