/* get rid of the comments & codes run. 
User Input Strings
It is possible to use the extraction operator >> on cin to store a string entered by a user:
*/

#include<iostream>
#include<string>
using namespace std;
int main() {

    //now simply ask user his name and tell him hello

            string name;
            cout << "Please enter you name : ";
            cin >> name;
            cout << "Hello " << name << "\n";

    //PROBLEM: cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single (even if you type many words) 
    // Ab apan name dere Areeb Ahmed, but it says only 'Hello Areeb; and skips Ahmed.

    /*HENCE WE USE THE FUNCTION : getline()*/
    //when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:

            string fullname;
            cout << "Please enter you name : ";
            getline(cin, fullname);
            cout << fullname;
    


}