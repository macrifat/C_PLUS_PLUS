#include <iostream>
using namespace std;

// function declaration

void myFunction( string name, int age)  // multiple parameter
{
    cout<<"your name is : "<<name<< " and you are : "<< age<< "years old" <<endl;
}

//main function
int main()
{
    myFunction("Rifat", 26); // multiple arguments
    myFunction("Monsur", 27);// multiple arguments
    myFunction("Rahim", 28);// multiple arguments

    return 0;
}
