#include <iostream>
using namespace std;

typedef unsigned short usrt;

usrt jumlah_tombol;
usrt tombol_ditekan;
usrt catat[10];
bool pernah[10];

void tulis(usrt kedalaman){
    if(kedalaman == tombol_ditekan){
        for(usrt i = 0; i < tombol_ditekan; i++){
            cout << catat[i] << ' ';
        }
        cout << endl;
    }else{
        for(usrt i = catat[kedalaman - 1]; i < jumlah_tombol; i++){
            if(pernah[i] == false){
                pernah[i] = true;
                catat[kedalaman] = i + 1;
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }   
}

int main(int argc, char const *argv[]){
    cin >> jumlah_tombol >> tombol_ditekan;
    tulis(0);
}
