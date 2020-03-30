#include <iostream>

using namespace std;

class student
{
    public:
        int id;
        double gpa;

    void display()
    {
        cout<<"id: "<<id<<"\t"<<" gpa: "<<gpa<<endl;
    }
    student()
    {
        cout<<"default constructor"<<endl;
    }
    student(int a,double b)
    {
        id=a;
        gpa=b;
    }
    };

int main()
{
    student ob; //default constructor
    student rifat(105,3.77);
    rifat.display();

}
