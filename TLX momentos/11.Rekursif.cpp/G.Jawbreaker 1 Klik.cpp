#include <iostream>
using namespace std;

char papan[25][25];
bool is_dicek[25][25];

class Jawbreaker{
    public:
        short p_baris; 
        short p_kolom;
        char warna_pilihan;
        short skor_akhir = 0;
        void check(short baris, short kolom){
            if(baris < 0 or kolom < 0 or baris > p_baris or kolom > p_kolom){
                return;
            }else{
                papan[baris][kolom] = '*';
                skor_akhir++;
                if(papan[baris - 1][kolom] == warna_pilihan){
                    check(baris - 1, kolom);
                }if(papan[baris + 1][kolom] == warna_pilihan){
                    check(baris + 1, kolom);
                }if(papan[baris][kolom + 1] == warna_pilihan){
                    check(baris, kolom + 1);
                }if(papan[baris][kolom - 1] == warna_pilihan){
                    check(baris, kolom - 1);
                }
            }   
        }
        void input_elemen_papan(){
            for(short i = 0; i < p_baris; i++){
                for(short j = 0; j < p_kolom; j++){
                    cin >> papan[i][j];
                }
            }
            //ubah dulu
            p_baris--;
            p_kolom--;
        }
};

int main(){
    Jawbreaker jo;
    short baris; 
    short kolom;

    cin >> jo.p_baris >> jo.p_kolom;
    jo.input_elemen_papan();
    cin >> baris >> kolom;
    jo.warna_pilihan = papan[baris][kolom];

    jo.check(baris, kolom);

    //output 
    cout << jo.skor_akhir * (jo.skor_akhir - 1) << '\n';
}