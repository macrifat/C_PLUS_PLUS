#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class student
{
private:
    string name;
public:
    void setname(string x)
    {
        name=x;
    }
    string getname()
    {
        return name;
    }
};

int main()
{
    student a;
    cout<<a.setname("rifat");
    cout<<a.getname();
}
