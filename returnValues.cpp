
#include <iostream>
using namespace std;

// function declaration
int myFunction(int x ,int y)
{
    return 5*(x+y) ;
}

// main function
int main()
{
    int z= myFunction(5,6);// storing the result in variable
    cout<< z; // output 5*(5 + 6)=55
    return 0;
}
