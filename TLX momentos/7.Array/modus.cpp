#include <iostream>
#include <cstring>
using namespace std;
int main(){
    //prepare
    int sizey;
    
    cout << "Masukkan jumlah bilangan: ";
    cin >> sizey;

    short bro[sizey];
    short jml[sizey];
    int erere = 0;

    //ngecek bilangan, dan penjumlahan frekuensinya
    for(int i = 0; i < sizey; i++){
        cin >> bro[i];
        jml[i] = 0;
        if(i == 0){
            jml[i]++;
        }
        else{
            bool baru = false;
            for(int j = 0; j < i; j++){
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
        if(jml[i] == 0) continue;
        erere++;
    }
    
    //cari mdous
    
    int bilangan[erere];
    int ctr[erere];
    int z = 0;
    for(int i = 0; i < sizey; i++){
        if(jml[i] == 0) continue;

            while(z < erere){
                bilangan[z] = bro[i];
                ctr[z] = jml[i];
                z++;
            }
    }
    bool modus[erere];
    for(z = 0; z < erere; z++){
        modus[z] = false;
        if(z == 0){
            modus[z] = true;
        }
        for(int x = 0; x < z; x++){

            if(ctr[z] > ctr[x] and modus[x] == true){
                modus[z] = true;
                modus[x] = false;
            }
            else if(ctr[z] == ctr[x] and modus[x] == true){
                modus[z] = true;
            }
        }
    }
    for(z = 0; z < erere; z++){
        if(modus[z] == true){
            cout << bilangan[z] << endl;
        }
    }

}