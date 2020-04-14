#include <iostream>

using namespace std;
 //base class
class MyClass {
    public:
        void myClassFunction(){
        cout<<"This is MyClass"<<endl;
        }
};
//another base class
class MyOtherClass {
public:
    void MyOtherFunction(){
        cout<<"This is MyOtherClass"<<endl;
        }

};
// Derived class
class MyChildClass : public MyClass , public MyOtherClass{
 public:
     void MyChildFunction(){
        cout<<"This is childClass"<<endl;
        }
};

int main(){
 MyChildClass obj;
 obj.MyChildFunction();
 obj.myClassFunction();
 obj.MyOtherFunction();

return 0;
}
