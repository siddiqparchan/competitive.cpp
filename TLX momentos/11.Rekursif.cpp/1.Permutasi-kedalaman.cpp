#include <iostream>

using namespace std;

short inputan_jumlah_kedalaman;
short catat_bilangan[8];
bool pernah[9];

void permutasi(short kedalaman){
    if(kedalaman == inputan_jumlah_kedalaman){
        for(short i = 0; i < inputan_jumlah_kedalaman; i++){
            cout << catat_bilangan[i];
        }
        cout << endl;
    }else{
        for(short i = 1; i <= inputan_jumlah_kedalaman; i++){
            if(pernah[i] == false){
                pernah[i] = true;
                catat_bilangan[kedalaman] = i;
                permutasi(kedalaman + 1);
                //karena udah kecetak
                pernah[i] = false;
            }
        }
    }
}

int main(){
    cin >> inputan_jumlah_kedalaman;
    permutasi(0);
}