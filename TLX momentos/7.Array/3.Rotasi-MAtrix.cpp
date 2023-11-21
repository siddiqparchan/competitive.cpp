#include <iostream>

using namespace std;

main(){

    short baris;
    short kolom;
    cin >> baris >> kolom;

    // arraynya
    short op[kolom][baris];
    for(short i = (baris - 1); i >= 0; i--){
        for(short j = 0; j < kolom; j++){
            cin >> op[j][i];
        }
    }
    for(short i = 0; i < kolom; i++){
        for(short j = 0; j < baris; j++){
            cout << op[i][j] << ' ';
        }
        cout << endl;
    }
}