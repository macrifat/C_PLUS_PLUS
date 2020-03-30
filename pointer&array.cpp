#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    cout<<a<<endl;       //068fedc
    cout<<&a[0]<<endl;  //068fedc
    cout<<*a<<endl ;    //1
    cout<<*(a+1)<<endl; //2
    cout<<(a+1)<<endl;  //26xxx8
    cout<<a[1]<<endl;//2
    cout<<&a[1]<<endl;  //26xxx8

    int *p;
    p=&a[2];

    cout<<"The value of a[2] is: "<<*p<<endl;       //3
    cout<<"The address of a[2] is: "<<p<<endl;        //68fee0
    cout<<"The address of a[2] is: "<<&a[2]<<endl;    //68fee0
    cout<<"The address of a[2] is: "<<(a+2)<<endl;    //68fee0
    cout<<"The value of a[2] is: "<<*(a+2)<<endl;   //3


return 0;
}
