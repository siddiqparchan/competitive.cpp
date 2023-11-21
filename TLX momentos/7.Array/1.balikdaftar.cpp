#include <iostream>

using namespace std;

main(){
    //prepare
    int n;
    int arr[100];
    short ctr = 0;
    //input
    while(cin >> n){
        arr[ctr] = n;
        ctr++;
    }

    //output 
    for(short i = (ctr - 1); i >=0; i--){
        cout << arr[i] << endl;
    }
}