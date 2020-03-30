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

};

int main()
{
    cout<<"For rifat: "<<endl;
    student rifat;
    rifat.id=102;
    rifat.gpa=3.44;
    rifat.display();

     cout<<"For Akhi: "<<endl;
    student akhi;
    akhi.id=103;
    akhi.gpa=3.88;
    akhi.display();
}
