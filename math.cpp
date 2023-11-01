#include<iostream>
#include<string>
#include<cmath>                      // ABSOLUTELY necessary 
using namespace std;
int main() {

    /*max(x,y)*/
    cout << max(10,50);
    // cout << max(10,20,30,40,50); - doesnt work idk why - cuz max function->comparision->max 2 values
    cout << "\n";

    /*min(x,y)*/
    cout << min(10,2);
    cout << "\n\n";

// #include<cmath> 
    /*
    C++ <cmath> Header
    Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file */
    
    cout << sqrt(64);                   
    cout << "\n\n";

    cout << round(2.6);
    cout << "\n\n";

    cout << log(2);
    cout << "\n\n";
 
 //Boolean :
    
    bool college_fun = false;
    bool madarsa_fun = true;
    cout << college_fun << "\n";
    cout << madarsa_fun << "\n\n\n";

    //Booloean Expressions :

    int x = 10, y = 20;
    cout << (x>y) << "\n";            //Notice how we are not even using bool data type here. Its not needed.
    cout << (x<y) << "\n";
    cout << (10 == 100) << "\n";
    cout << (10 == 10) << "\n\n\n";         //brackets needed around the nums '(' 10 == 10 ')'

    //Real Life example :

    int age = 20;
    int voting_age = 18;
    cout << (age>=voting_age) << "\n";
    //this returns 1(true) if the person can vote and 0 if he cant.
    //doing the same using if-else.

    if(age>=voting_age){
        cout << "Yes! You can vote.";
    }else {
        cout << "Sorry, please wait for few years.";
    }

    cout << "\n\n";

    







    
}
