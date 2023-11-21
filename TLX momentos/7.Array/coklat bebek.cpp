#include <iostream>
using namespace std;

main(){
    int kandang;
    cout << "Masukin jumlah kandang: ";
    cin >> kandang;

    //reference biar cepet
    int &n = kandang;

    //Males pakai multidimen
    int gan[n][n];
    int deng[n][n];

    //looping Ganesh
    for(short i = 0; i < n; i++){
        for(short j = 0; j < n; j++){
            cin >> gan[i][j];
        }
        //ganti baris
    }
    
    //looping dengklek
    for(short i = 0; i < n; i++){
        for(short j = 0; j < n; j++){
            cin >> deng[i][j];
        }
        //ganti baris
    }

    //looping hasil
    for(short i = 0; i < n; i++){
        for(short j = 0; j < n; j++){
            cout << deng[i][j] + gan[i][j] << ' ';
        }
        cout << endl;
    }


}