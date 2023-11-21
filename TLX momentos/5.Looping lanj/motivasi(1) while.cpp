#include <iostream>
using namespace std;
int main(){
    short n,m,a,b;
    cout<<"masukin barisnya: ";cin>>n;
    cout<<"Kolom: ";cin>>m;
    a=1;
    while(a<=n){
        //kalo inisialisasi b-nya disini, maka maknanya sama dengan for;
        b=1;
        while(b<=m){
            cout<<'*';
            b++;
        }
        cout<<endl;
        a++;
    }
}