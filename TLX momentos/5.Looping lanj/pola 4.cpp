#include <iostream>
using namespace std;
int main(){
    short n,a,m;
    cin>>n>>m;
    for(a=1;a<=n;a++){
        if(a==m) break;
        cout<<a<<endl;
    }
    cout<<"selesai";
}