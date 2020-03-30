#include <iostream>

using namespace std;
class student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout<< "id: "<<id<<"\t"<<"gpa: "<<gpa<<endl;
    }
     student(int a,double b)
     {
         id=a;
         gpa=b;
     }
};

int main()
{
    cout<< "for rifat: "<<endl;
//constructor
    student rifat(102,3.44);
    rifat.display();
}
