#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(1<=n<=100000){
        if(n<10) {
        cout<<"satuan"<<endl;
        }
        else if(n<100){
        cout<<"puluhan"<<endl;
        }
        else if(n<1000){
        cout<<"ratusan"<<endl;
        }
        else if(n<10000){
        cout<<"ribuan"<<endl;
        }
        else if(n<100000){
        cout<<"puluhribuan"<<endl;
        }
    }
}