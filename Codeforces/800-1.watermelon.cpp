#include <iostream>

using namespace std;

main(){
    short w;
    cin >> w;
    if(w % 2 == 0 and w > 2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}