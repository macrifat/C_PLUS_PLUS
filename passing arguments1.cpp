#include <iostream>

using namespace std;

void display(int *num){


 *num=8;

}

int main(){
    int a=5;
    cout<<"value before call is: "<<a<<endl;
    display(&a);
    cout<<"the value after call by reference is: "<<a<<endl;


}
