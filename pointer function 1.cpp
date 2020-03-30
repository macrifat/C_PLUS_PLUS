#include <iostream>
#include <cstring>

using namespace std;

void add(int a, int b);
void sub(int,int);
void mul(int,int) ;
void div(int,int);

int main()
{

    add(1,2);
    sub(5,3);
    mul(2,3);
    div(2,3);


}

void add(int a, int b){

int c=a+b;

cout <<c<<endl;


}
void sub(int a,int b){
 int sub=a-b;
 cout<<sub<<endl;

}

void mul(int a, int b){
int results=a*b;
cout<<results<<endl;
}

void div(int a,int b){

float results=(float)a/b;
cout<< results<<endl;
}

