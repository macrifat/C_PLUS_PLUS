#include <iostream>

using namespace std;

class mobileuser
{
public:
    virtual void sendmsg()=0;
};

class rahim: public mobileuser
{
public:
    void sendmsg()
    {
        cout<<"i am rahim"<<endl;
    }
};

class karim: public mobileuser
{
public:
    void sendmsg()
    {
        cout<<"i am karim"<<endl;
    }
};

int main(){

mobileuser *m;
rahim r;
karim k;

m=&r;
m->sendmsg();
m=&k;
m->sendmsg();

}
