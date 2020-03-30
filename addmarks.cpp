#include <iostream>
using namespace std;

int main(){
 int n,total=0,marks[100];

 cout<<"Please enter number of subjects: ";
 cin>>n;
 for(int i=0;i<n;i++){
    cout<<"subject"<<i+1<<"="<<endl;
    cin>>marks[i];
    total=total+marks[i];
    }
cout<<"the total marks is:"<<total<<endl;
cout<<"Average marks is: "<<total/4;

}
