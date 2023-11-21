#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    if(( 1<=N<=100000 )and( 1<=M<=100000 ) ) {
        cout<<"masing-masing "<< N/M <<endl;
        cout<<"bersisa "<<N%M<<endl;
    }
}