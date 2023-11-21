#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int A,T;
    cin>>A>>T;
    if(0<A<=1000 and 0<T<1000){
        cout<<fixed;
        cout<<setprecision(2)<<(float)A*T/2;
    }
}