#include <iostream>
#include <cstring>

using namespace std;

struct student
{
   int roll;
   char name[10] ;
   float f;
   int age;
};

int main()
{
    struct student rec;
    rec.age=18;
    rec.roll=4;
    strcpy(rec.name,"rifat");
    rec.f=45.6;

    cout<<"name ="<<rec.name<<endl<<"age="<<rec.age<<endl<<"roll="<<rec.roll<<endl<<"percentage="<<rec.f<<endl;
}
