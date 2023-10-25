#include<iostream>
using namespace std;
int main() {
    // string one, two;
    // cout << "Enter your first string: ";
    // getline(cin, one);
    // cout << "Enter your string two: ";
    // getline(cin, two);

    // if(one.length() > two.length()){
    //     cout << "Your first string was longer";
    // }else if(two.length() > one.length()){
    //     cout << "String two is longer";
    // }else{
    //     cout << "Both are equal";
    // }

    //we print 0 to 100 nums which are even :

    int i = 0;
    while(i<=100){
        if(i % 2 == 0){
            cout << i << " ";
        }
        i++;
    }

    cout << "\n\n";

    for(int j=0; j<=100; j++){
        if(j%2 != 0){
            cout << j << " ";
        }
    }

   
    
}