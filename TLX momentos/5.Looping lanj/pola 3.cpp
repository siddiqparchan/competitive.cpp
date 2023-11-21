#include <iostream>
using namespace std;
int main(){
    short n,a,c,b;
    cin>>n;
    for(a=1;a<=n;a++){
        for(b=n;b>a;b--){
            cout<<' ';
        }
        for(c=1;c<=a;c++){
            cout<<'*';
        }
        cout<<endl;
    }
}