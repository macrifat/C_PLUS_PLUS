
#include <iostream>
using namespace std;

void myFunction(string fName= "Ashik") // default parameter
{
    cout<< fName << "Rahman.\n ";
}

//main function
int main()
{
    myFunction("Rahim "); // passing arguments
    myFunction("Karim ");// passing arguments
    myFunction(); //  default function calling
    return 0;
}
