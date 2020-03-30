#include<iostream>
using namespace std;

class student
{
public:
    void display()
    {
        cout<<"i am student class"<<endl;
    }
};

class teacher:public student
{
public:
    void display()
    {
        cout<<"i am a teacher"<<endl;
    }
};
class person:public student
{
public:
    void display()
    {
        cout<<"I am person class"<<endl;
    }
};
int main()
{
    student s1;
    s1.display();
    person p1;
    p1.display();
    teacher t1;
    t1.display();
}






