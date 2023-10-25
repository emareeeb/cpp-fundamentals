#include<iostream>
#include<string>
using namespace std;
int main() {
    
// String append : string1.append(string2)
    string greeting = "Hello! ";
    string khair_khairiyat = "How are you doing? ";
    // cout << greeting.append(khair_khairiyat) << " " << "\n";

    //how abt taking user input and writing their name?
    string NAME;
    cout << "Hey! Whats you name? ";
    cin >> NAME;
    cout << greeting.append(NAME) + "\n";

    cout << "\n";
    //SO; ab apan greeting pe khair-khairiyat append kare so that becomes a part of greeting permanently.

// String Length : string.length()
    string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout <<"The length of string is "<< alphabets.length() << "\n";
    cout << alphabets.length();

    cout << "\n\n";

//Access Strings
    /*You can access the characters in a string by referring to its index number inside square brackets [].
    This example prints the first character in myString:*/

    string myString = "Marvel Cinematic Universe";
    cout << myString[0] << "\n";
    cout << myString[10];

    cout << "\n\n";
    //Now we change the character(letter) in the string by referring them via indexing:
    string smtg = "Hello";
    smtg[0] = 'J';
    cout << smtg;

//Access full string from the user : getline(cin, var) //var= variable you have to store input taken from user in.
    string fullname;
    cout << "Enter your name : ";
    getline(cin, fullname);
    cout << "Hello! " << fullname;
























    
}
