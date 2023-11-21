#include <iostream>
using namespace std;
int main(){
    short n,a,c;
    cin>>n;
    for(a=1;a<=n;a++){
        for(c=1;c<=a;c++){
            cout<<'*';
        }
        cout<<endl;
    }
}