#include <iostream>

using namespace std;

class student
{
public:
    int admissionfee;

    student(int x)
    {
        admissionfee=x;
        cout<<"admission fee: "<<admissionfee<<endl;
    }
};

int main()
{
    student r(200);
}
