#include <iostream>
using namespace std;
int main(){
    unsigned short n,a;
    cin>>n;
    if(n<=1) cout<<"bukan prima";
        for(a=2;a<=n;a++){
            
            if(a==n) {
                cout<<"Prima";
                break;
            }
            
            if(n%a==0) {
                cout<<"bukan prima";
                break;
            }
            
        }
}