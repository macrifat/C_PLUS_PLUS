#include <iostream>
using namespace std;

class student{
public:
    int id;
    double gpa;

    void display()
    {
        cout<<"id: "<< id<<"\t"<<"gpa : "<<gpa<<endl;
    }
    void setValue(int x, double y)
    {
        id=x;
        gpa=y;
    }

};

int main()
{
    cout<<"For rifat: "<<endl;
    student rifat;
    rifat.setValue(103,3.45);
    rifat.display();

     cout<<"For Akhi: "<<endl;
    student akhi;
    akhi.setValue(105,3.78);

    akhi.display();
}
