#include <iostream>
#include <cstring>
using namespace std;
int main(){
    //prepare
    int sizey;
    short modus;
    short locate;
    cin >> sizey;

    short bro[sizey];
    short jml[sizey];

    //ngecek bilangan, dan penjumlahan frekuensinya
    for(int i = 0; i < sizey; i++){
        jml[i] = 0;
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
    
    for(int i = 0; i < sizey; i++){
        if(jml[i] == 0){
            continue;
        }
        if(i == 0){
            modus = bro[0];
            locate = jml[i];
        }
        else {
            if(jml[i] < locate){
                continue;
            }
            else if(jml[i] > locate){
                modus = bro[i];
                locate = jml[i];
            }
            else if(jml[i] == locate and bro[i] > modus){
                modus = bro[i];
                locate = jml[i];
            }
        }
    }
    cout << modus;
}