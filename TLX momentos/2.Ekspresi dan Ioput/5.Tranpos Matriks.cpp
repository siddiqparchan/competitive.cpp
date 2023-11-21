#include<iostream>

using namespace std;

int main(){
    short a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cin>>g>>h>>i;
    bool xu = 1<=a<=100 and 1<=b<=100 and 1<=c<=100;
    bool xi = 1<=d<=100 and 1<=e<=100 and 1<=f<=100;
    bool xe = 1<=g<=100 and 1<=h<=100 and 1<=i<=100;

    if(xu and xi and xe == true){
        cout<<a<<' '<<d<<' '<<g<<endl;
        cout<<b<<' '<<e<<' '<<h<<endl;
        cout<<c<<' '<<f<<' '<<i<<endl;
    } 
}