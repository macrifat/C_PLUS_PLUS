#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"please enter the number: ";
    cin>>a>>b>>c;
    if(a>b){
            if(b>c)
        cout<<"a is greater";
    }
    if (b>a){
        if(a>c)
        cout<<"b is greater";
    }
    else
        cout<<"c is greater";
}
