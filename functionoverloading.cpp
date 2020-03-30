#include<iostream>
#include<cstring>

using namespace std;

void addition(int ,int);
void addition(int a,int b,int c);

int main(){

    addition(2,3);
    addition(2,5,6);





}

void addition(int a,int b){

int sum=a+b;
cout<<"the sum is: "<<sum<<endl;

}

void addition(int a,int b,int c){

int sum=a+b+c;
cout<<"the sum is: "<<sum<<endl;

}
