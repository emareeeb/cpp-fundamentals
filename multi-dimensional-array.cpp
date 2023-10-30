#include<iostream>
using namespace std;
int main() {
    /*Multi-Dimensional Arrays
    A multi-dimensional array is an array of arrays.
    To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:
    
    PEHLE ROWS[]
    PHIR COLUMNS[]*/

    string letters[2][4] ={
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    /*INDEXING IN MULTIDIMENSIONAL ARRAY*/
    //lets say first row and third column ie 'C'
    cout << letters[0][2];
    //or we want to print 'F' which is the 2nd row and 2nd column:
    cout << "\n" << letters[1][1];            //so konsi row & column print karna hai uska -1 kardena bas!

    cout << "\n\n";
    /*LOOPONG THROUGH A multidimentional array:*/

    /*
        We know that we have declared :
            string letters[2][4] ={
                {"A", "B", "C", "D"},
                {"E", "F", "G", "H"}
            };
    
    */
    for(int i = 0; i<2; i++){
        for(int j = 0; j<4; j++){
            cout << letters[i][j] << "\n";
        }
    }



          



























}