#include <iostream>
using namespace std;

main(){
    int sizey;
    cout << "Masukkan jumlah bilangan: ";
    cin >> sizey;

    int bro[sizey];
    int jml[sizey];

    for(short x = 0; x < sizey; x++){
        jml[x] = 0;
    }

    for(short i = 0; i < sizey; i++){
        cin >> bro[i];
        if(i == 0){
            jml[i]++;
        }
        else{
            bool baru = false;
            for(short j = 0; j < i; j++){
                if(bro[i] == bro[j]){
                    jml[j]++;
                    baru = false;
                    break;
                }
                else{
                    baru = true;
                }
            }
            if(baru == true){
                jml[i]++;
            }
        }
    }

    for(short i = 0; i < sizey; i++){
        if(jml[i] == 0){
            continue;
        }
        else{
            cout << bro[i] << " Jumlahnya: " << jml[i] << endl;
        }
    }
}