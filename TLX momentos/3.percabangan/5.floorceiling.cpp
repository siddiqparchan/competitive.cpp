#include <iostream>
using namespace std;
int main(){
    float n;
    int C,F;
    cin>>n;
    if(-100000<=n<=100000){
        if(n==(int)n){
            C=F=n;
            cout<<F<<' '<<C;
        }
        else if(n<0){
            n=(int)n;
            F=n-1;
            C=n;
            cout<<F<<' '<<C;
        }
        else{
            n=(int)n;
            F=n;
            C=n+1;
            cout<<F<<' '<<C;
        }
    }
}