#include <iostream>
using namespace std;

    /* NAMED STRUCTURES :
    By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.
    To create a named structure, put the name of the structure right after the struct keyword:*/

    //NOW THE STRUCTURE IS OUTSIDE INT MAIN()

struct myCar{
    string brand;
    int year;
};

int main() {

    myCar car1;
    car1.brand = "BMW";
    car1.year = 2023;

    myCar car2;
    car2.brand = "Volvo";
    car2.year = 2020;


}
    


    
