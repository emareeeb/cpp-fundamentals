#include<iostream>                  

using namespace std;
int main() {
    int age, voting_age = 18;
    cout << "Please enter your age : ";
    cin >> age;                              // YOU CANT use 'getline(cin, age)' cuz THATS FOR STRINGS!
    if(age>=voting_age){
        cout << "Eligible to Vote.";
    }else{
        cout << "Not Eligible to Vote.";
    }
}
