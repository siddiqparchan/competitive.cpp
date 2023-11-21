#include <iostream>
using namespace std;

short jumlah_kedalaman;
short catat[9];
bool pernah[10];

void tulis(short kedalaman){
    if(kedalaman == jumlah_kedalaman){
        // Kalau kondisi terpenuhi maka cetak
        kedalaman--;
        bool apakah_cetak = true;
        for(short i = 1; i < kedalaman; i++){
            if((catat[i] > catat[i - 1] and catat[i] > catat[i + 1]) or (catat[i] < catat[i - 1] and catat[i] < catat[i + 1])){
                //kalau kondisi sesuai no problem
            }else{
                apakah_cetak = false;
            }
        }
        if(apakah_cetak == true){
            for(short i = 0; i <= kedalaman; i++){
                cout << catat[i];
            }
            cout << endl;
        }
    }else{
        for(short i = 1; i <= jumlah_kedalaman; i++){
            if(pernah[i] == false){
                catat[kedalaman] = i;
                pernah[i] = true;
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

int main(int argc, char const *argv[]){
    cin >> jumlah_kedalaman;
    tulis(0);
}
