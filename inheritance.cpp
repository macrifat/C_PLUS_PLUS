#include <iostream>

using namespace std;

class person
{
public:

    string name;
    int age;
    void display1()
    {
        cout<<"Name is:"<<name<<"   age is: "<<age<<endl;
    }
};

class student:public person  //inherite
{
public:
    int id;

    void display2()
    {
        cout<<"id is:"<<id<<endl;
        display1();
    }
};

int main()
{
    student a;
    a.name="rifat";
    a.age= 23;
    a.id=5686;
    a.display2();
}
