#include <bits/stdc++.h>
using namespace std;

    //pakai ide cari jumlah faktor
    //cari faktorisasi prima dari bilangan
    //terus kalau sejenis dihitung jumlahnya
    //terus cari tahu berapa jumlah faktor
    //hanya perlu loop sampai sqrt(n)

class Lampu{
    public:
        long long bilangan_N;
        int jumlah_faktor;
        void hitung_faktor(){
            int batas_loop = sqrt(bilangan_N);
            for(int i = 2; i <= batas_loop; i++){
                if(bilangan_N % i == 0){
                    while(bilangan_N % i == 0){
                        jumlah_faktor++;
                        bilangan_N /= i;
                    }
                    jumlah_faktor++;
                }
            }
        }
};

int main(){
    Lampu siddiq;
    cin >> siddiq.bilangan_N;
    siddiq.hitung_faktor();
    if(siddiq.jumlah_faktor % 2 == 0){
        cout << "lampu mati" << '\n';
    }else{
        cout << "lampu menyala" << '\n';
    }
}