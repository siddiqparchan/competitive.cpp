#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(-100000<=n<=100000){
        if(n>0) {
        cout<<"positif"<<endl;
        }
        else if(n==0){
        cout<<"nol"<<endl;
        }
        else{
        cout<<"negatif"<<endl;
        }
    }
}