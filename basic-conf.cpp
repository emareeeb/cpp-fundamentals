#include<iostream>
#include<string>
using namespace std;
int main() {
    // //finding the diff between the notions + and << in cout syntax.
    // string name = "Areeb ", surname = "Ahmed";
    // cout << name << surname;
    // cout << "\n";
    // cout << name + surname;
    // cout << "\n";
    // //lil improvs : 
    // string naam = "Areesha ", snaam= "Anjum";
    // cout << naam + snaam + "\n";
    // cout << naam << snaam << "\n";
    // cout << "The name is " + naam + snaam + "\n";
    // cout << "Again, The name is " << naam << snaam << "\n";

    //ab apan string1 pe string2 append kare uske ke baad that string one always carries string 2 permanently.
    string greeting = "Hello ";
    string greet = "Hola";
    cout << greeting.append(greet) << "\n";
    // now we only print greeting (ie apni string1)
    cout << greeting << "\n";
    cout << greet;  // where as the string2 ie our greet part remains exactly same with no changes.
}