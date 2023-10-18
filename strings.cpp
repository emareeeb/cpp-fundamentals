//The string type is used to store a sequence of characters (text).
// This is not a built-in type, but it behaves like one in its most basic usage. 
//String values must be surrounded by double quotes:
// incld lib : #include<string>


#include<iostream>
#include<string>    // DO NOT FORGET TO INCLUDE THIS LIBRARY IN THE HEADER INCLUDES.
using namespace std;
int main() {
    string name = "Areeb Ahmed";
    cout << name << "\n";

    //String concatenation : 
    string naam = "Areeb ";   //NOTICE HOW WE'VE LEFT SOME SPACE TO GET THE NAME RIGHT
    string surname = "Ahmed";
    cout << naam + surname << "\n";

    string one = "Areesha";
    string two = "Anjum";
    cout << one + " " + two;   // ADD SPACE USING ""
    cout << "\n";

   
    /*A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:*/

    // string1.append(string2)

    string FIRSTNAME = "Mohammed ";   //NOTICE HOW WE HAVE LEFT SOME SPACE AGAIN
    string LASTNAME = "Anas";
    cout << FIRSTNAME.append(LASTNAME);
    cout << "\n";

    /*
    WARNING!
    C++ uses the + operator for both addition and concatenation.
    Numbers are added.
    Strings are concatenated.
    */
   // If you add two int's -> then it will be addition 
   // If you add two strings's -> then it will be concatenated; ex : string a=10, b=40 ;---->> a+b = 1040
   // If you try adding a string and an int ---->>> ERROR!


   /* STRING LENGTH*/
   // string.length() 

    string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";                  //declare within the double quotes
    cout << alphabets.length() << "\n";
    //alternatively :
    cout << "The Length of the string aplhabets is : " << alphabets.length();

}