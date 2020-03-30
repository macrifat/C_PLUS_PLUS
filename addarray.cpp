#include <iostream>
using namespace std;
int main(){
int a[2][2],b[2][2],c[2][2];

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<"Array of a["<<i<<"]["<<j<<"]="<<endl;
        cin>>a[i][j];
    }
}
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Array of b["<<i<<"]["<<j<<"]="<<endl;
            cin>>b[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=(a[i][j] + b[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"\t"<<c[i][j]<<"\t";

        }
    }
}










