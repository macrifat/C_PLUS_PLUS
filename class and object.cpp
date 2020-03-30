#include <iostream>
using namespace std;

class student{
public:
    int id;
    double gpa;

};

int main()
{
    student rifat;
    rifat.id=102;
    rifat.gpa=3.44;
    cout<<rifat.id<<endl<<rifat.gpa<<endl;

    student akhi;
    akhi.id=103;
    akhi.gpa=3.88;
    cout<<akhi.id<<endl<<akhi.gpa;
}
