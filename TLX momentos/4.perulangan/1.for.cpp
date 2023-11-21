#include<iostream>
using namespace std;
int main(){
    unsigned short a,Bi,N;
    int c=0;
    cin>>N;
    for(a=1;a<=N;a++){
        cin>>Bi;
        c=c+Bi;
    }
    cout<<c<<endl; 
}