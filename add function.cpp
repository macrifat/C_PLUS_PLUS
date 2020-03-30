 #include<iostream>
 using namespace std;

 int add(int num1, int num2);
 int sub(int num1,int num2);

 int main(){
 int a,b,c,d,e,m;
 a=10;
 b=20;
 d=500;
 e=600;
 c=add(a,b);
 m=sub(d,e);
 cout<<c<<endl;
 cout<<m;
 return 0;

 }
 int add(int num1,int num2){
 int num3;
 num3=num1+num2;
 return num3;

 }
 int sub(int num1,int num2){
     int num4;
 num4=num1-num2;
 return num4;

 }
