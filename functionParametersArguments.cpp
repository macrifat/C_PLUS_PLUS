#include <iostream>
using namespace std;

// declaration a function
 void myFunction(string fName)        // parameter
 {
     cout<< fName <<" rahman.\n";
 }

// main function
int main()
{
    myFunction("Rahim "); // passing arguments
    myFunction("Karim ");// passing arguments
    myFunction(""); //  no fName
    myFunction(); //error because argument can not be empty
    return 0;
}
