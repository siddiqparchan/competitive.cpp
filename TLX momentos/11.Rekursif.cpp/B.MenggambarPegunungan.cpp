#include <iostream>

using namespace std;

short jumlah_tingkat;

void tulis(int tingkat){
    if(tingkat == 1){
        cout << '*' << endl;
    }else{
        tulis(tingkat - 1);
        for(short i = 0; i < tingkat; i++){
            cout << '*';
        }
        cout << endl;
        tulis(tingkat - 1);
    }
}

int main(int argc, char const *argv[]){
    cin >> jumlah_tingkat;
    tulis(jumlah_tingkat);
}
