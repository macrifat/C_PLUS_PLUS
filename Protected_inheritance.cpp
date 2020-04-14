#include<iostream>
using namespace std;

//Base class
class Employee {
protected:  // protected access specifier
    int salary;
};


class Programmer : public Employee{
 public:
     int bonus;

   void setSalary(int s){
   salary = s ;
   }
   int getSalary(){
    return salary;
   }
};

int main(){
 Programmer obj;
 obj.setSalary(50000);
 obj.bonus= 10000;
 cout<< "Salary :" << obj.getSalary()<< "\n" ;
 cout<< "Bonus : " << obj.bonus << endl;


return 0;
}
