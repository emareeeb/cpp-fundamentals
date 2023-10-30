#include<iostream>
using namespace std;

/*Return Values
The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:
*/

int myfunction(int x){
    return 5 + x;
}

int sum(int a, int b){
    cout << a + b;
}

int main() {
    cout << myfunction(15) << "\n";
    sum(100,20);
}