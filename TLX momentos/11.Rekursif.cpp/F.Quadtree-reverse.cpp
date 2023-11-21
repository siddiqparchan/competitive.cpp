#include <bits/stdc++.h>
using namespace std;

class Quad{
    public: 
        int baris, kolom;
        int power_2 = 1;
        int jml_jawaban;
        string * isi_jawaban;
        bool **papan;
        //method
        Quad();
        ~Quad();
        void alokasi_papan();
        void output_akhir();
        void main_proses(int baris, int kolom, int n, string kode);
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Quad jo;
    for(int i = 0; i < jo.jml_jawaban; i++){
        jo.main_proses(0,0, jo.power_2, jo.isi_jawaban[i]);
    }
    jo.output_akhir();
}

void Quad::main_proses(int baris, int kolom, int n, string kode){
    if(kode.empty()){
        for(int i = baris; i < baris + n; i++){
            for(int j = kolom; j < kolom + n; j++){
                papan[i][j] = 1;
            }
        }
    }else{
        char opsi = kode[0];
        kode.erase(0, 1);
        n /= 2;
        if(opsi == '0'){
            main_proses(baris, kolom, n, kode);
        }else if(opsi == '1'){
            main_proses(baris, kolom + n, n, kode);
        }else if(opsi == '2'){
            main_proses(baris + n, kolom, n, kode);
        }else if(opsi == '3'){
            main_proses(baris + n, kolom + n, n, kode);
        }
    }
}
void Quad::output_akhir(){
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << papan[i][j] << ' '; 
        }
        cout << '\n';
    }
}
void Quad::alokasi_papan(){
    //fill power_2
    if(baris >= kolom){
        while (power_2 < baris){
            power_2 *= 2;
        }
    }else{
        while (power_2 < kolom){
            power_2 *= 2;
        }
    }
    //alocation
    papan = new bool*[power_2];
    for(int i = 0; i < power_2; i++){
        papan[i] = new bool[power_2];
    }
    //fill by 0
    for(int i = 0; i < power_2; i++){
        for(int j = 0; j < power_2; j++){
            papan[i][j] = 0;
        }
    }
}

//Tructor
Quad::Quad(){
    cin >> jml_jawaban;

    isi_jawaban = new string[jml_jawaban];

    for(int i = 0; i < jml_jawaban; i++){
        cin >> isi_jawaban[i];
        //hilangin 1
        isi_jawaban[i].erase(0, 1);
    }

    cin >> baris >> kolom;

    alokasi_papan();
}
Quad::~Quad(){
    delete[] isi_jawaban;
    for(int i = 0; i < power_2; i++){
        delete[] papan[i];
    }
    delete[] papan;
}