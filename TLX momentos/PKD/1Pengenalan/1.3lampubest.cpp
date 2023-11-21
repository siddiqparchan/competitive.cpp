#include <bits/stdc++.h>
using namespace std;

// pakai ide bilangan kuadrat

class Lampu{
    public:
        long long N;
        void cari_apakah_sqrt(){
            double sementara = sqrt(N);
            if(sementara == (int)sqrt(N)){
                cout << "lampu menyala" << '\n';
            }else{
                cout << "lampu mati" << '\n';
            }
        }
};

int main(){
    Lampu bilangan;
    cin >> bilangan.N;
    bilangan.cari_apakah_sqrt();
}
