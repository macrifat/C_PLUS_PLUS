#include <iostream>

using namespace std;

int main()
{
   while(1)
   {
        int a,b;
    try{
     cout<<"Enter two integer number: ";
    cin>>a>>b;

    if(b==0)
    {
        throw 1;
    }
    double c=(double)a/b;
    cout<<"result: "<<c<<endl;
    }
   catch(int x)
   {
       cout<<"divided by zero not possible"<<endl;
       cout<<"please try again"<<endl;
   }
   }
}
