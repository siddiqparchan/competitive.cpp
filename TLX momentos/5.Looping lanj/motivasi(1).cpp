#include <iostream>
using namespace std;
int main(){
    short n,m,a,b;
    cout<<"masukin barisnya: ";cin>>n;
    cout<<"Kolom: ";cin>>m;
    for(a=1;a<=n;a++){
        for(b=1;b<=m;b++){
            cout<<'*';
        }
        cout<<endl;
    }
}