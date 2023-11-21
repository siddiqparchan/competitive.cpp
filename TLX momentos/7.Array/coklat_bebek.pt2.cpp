#include <iostream>
using namespace std;

main(){
    short n,temp;
    cin >> n;

    short hasil [n][n];
    for(short i = 0; i < n; i++){
        for(short j = 0; j < n; j++){
            cin >> temp;
            hasil[i][j] = temp;
        }
    }
    for(short i = 0; i < n; i++){
        for(short j = 0; j < n; j++){
            cin >> temp;
            hasil[i][j] += temp;
        }
    }

    //output
    for(short i = 0; i < n; i++){
        for(short j = 0; j < n; j++){
            cout << hasil[i][j] << ' ';
        }
        cout << endl;
    }
}