#include <iostream>

using namespace std;

main(){
    short n;
    cin >> n;
    short a,b,c;
    short ng = 0;
    for(short i = 0; i < n; i++){
        cin >> a >> b >> c;
        if((a + b + c) >= 2)
            ng++;
    }
    cout << ng;
}