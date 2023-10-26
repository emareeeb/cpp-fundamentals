#include<iostream>
using namespace std;
int main() {
    /*C++ Arrays
    Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:*/

    string cars[4] = {"maruti", "ford", "volvo","mahindra"};
    int Numbers[3] = {10,20,30};      //notice how for numbers we dont req a ' and for strings we req a "".

    /*ACCESS THE ELEMENTS OF THE ARRAY - INDEXING*/

    cout << cars[0] << "\n";
    cout << cars[1] << "\n";
    cout << cars[2] << "\n";
    cout << cars[3] << "\n";

    cout << "\n";

    //or print the elements in one line - of numbers array:

    cout << Numbers[0]<< "," << Numbers[1] << "," << Numbers[2];

    cout << "\n\n";


    /*CHANGE ELEMENTS OF ARRAY*/
    string cakes[3] = {"chocolate", "vanilla", "pineapple"};

    //lets change chocolate to blueberry

    cakes[0] = "blueberry";
    //print and check : 
    cout << cakes[0];
}

