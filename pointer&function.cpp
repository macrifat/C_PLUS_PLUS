#include <iostream>
#include<cstring>
using namespace std;

void swap(int a, int b);

int main(){
 int a=2,b=3;
 cout<<"value of a : "<<a<<endl<<"value of b : "<<b<<endl;
 swap(a,b);

return 0;
}

void swap(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;

    cout<<"value of a : "<<a<<endl<<"value of b : "<<b<<endl;
}
