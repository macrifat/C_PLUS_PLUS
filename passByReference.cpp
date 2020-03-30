#include <iostream>
using namespace std;

void swapNumber( int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    int firstNumber= 5;
    int secondNumber= 6;

    cout<<"before swapping : \n"<<firstNumber<<" and "<< secondNumber<<endl;

    // call the function, which will change the values of firstNumber and SecondNumber

    swapNumber(firstNumber,secondNumber);

    cout<< "After swap: "<<"\n";
    cout<< firstNumber <<" and " <<secondNumber<<"\n";


    return 0;


}
