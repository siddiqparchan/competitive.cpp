#include <iostream>
using namespace std;

main(){
    short n,y;
    cout << "Masukkan jumlah bebek: ";
    cin >> n;
    y = 0;

    short x[n];

    for(short i = 0; i < n; i++){
        cin >> x[i];
        y = y + x[i];
    }

    //cara saya, soalnya ya gitu, ga perlu float juga
    short avg = y / n;
    
    //var y di daur ulang
    y = 0;

    for(short i = 0; i < n; i++){
        if(x[i] >= avg){
            y++;
        }
    }
    cout << y;

    //cara Toki
    /*
    short lulus = 0;
    for(short i = 0; i < n; i++){
        if(x[i] * n >= y){
            lulus++
        }
    }
    cout << lulus;
    */
   //Mungkin cara TOKI sedikit lebih cepat karena pakai perkalian, kalau dilihat secara sekilas
   //Tapi kalau diperhatiin lagi, tapi entah lah ya, karena kita ga perlu ngaliin x[i] sama n, waktunya mungkin lebih singkat, karena perkalian adalah penjumlahan berluang, tapi kalau di komputer kaga tahu
}