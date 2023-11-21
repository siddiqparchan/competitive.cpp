#include <bits/stdc++.h>
using namespace std;

class ParentMethod{
    virtual void kodekan(short baris, short kolom, short n, string kode) = 0;
    virtual bool is_homogen(short baris, short kolom, short n) = 0;
    virtual void alokasi_array() = 0;
    virtual void dealokasi_array() = 0;
    virtual void isi_power_2() = 0;
    virtual void input_elemen_array() = 0;
    virtual void output_akhir() = 0;

};

class Quad : ParentMethod{
    public:
        short baris, kolom;
        short power_2 = 1;
        short jml_jawaban = 0;
        string * jawaban;
        bool ** papan;
        //method
        Quad(){
            cin >> baris;
            cin >> kolom;
        }
        ~Quad(){
            dealokasi_array();
        }
        void isi_power_2() override{
            if(baris >= kolom){
                while(power_2 < baris){
                    power_2 *= 2;
                }
            }else{
                while(power_2 < kolom){
                    power_2 *= 2;
                }
            }
        }
        void alokasi_array() override{
            papan = new bool * [power_2];
            for(short i = 0; i < power_2; i++){
                papan[i] = new bool[power_2];
            }

            jawaban = new string[power_2 * power_2];
        }
        void dealokasi_array() override{
            delete[] jawaban;
            for(short i = 0; i < power_2; i++){
                delete[] papan[i];
            }
            delete[] papan;
        }
        void input_elemen_array() override{
            for(short i = 0; i < baris; i++){
                for(short j = 0; j < kolom; j++){
                    cin >> papan[i][j];
                }
            }
            //fill by 0
            for(short i = baris; i < power_2; i++){
                for(short j = kolom; j < power_2; j++){
                    papan[i][j] = 0;
                }
            }
        }
        bool is_homogen(short baris, short kolom, short n) override{
            for(short i = baris; i < baris + n; i++){
                for(short j = kolom; j < kolom + n; j++){
                    if(papan[i][j] != papan[baris][kolom]){
                        return false;
                    }
                }
            }
            return true;
        }
        void kodekan(short baris, short kolom, short n, string kode) override{
            if(is_homogen(baris, kolom, n)){
                if(papan[baris][kolom] == 1){
                    jawaban[jml_jawaban] = "1" + kode;
                    jml_jawaban++;
                }
            }else{
                //belah
                n /= 2;
                kodekan(baris, kolom, n, kode + "0");
                kodekan(baris, kolom + n, n, kode + "1");
                kodekan(baris + n, kolom, n, kode + "2");
                kodekan(baris + n, kolom + n, n, kode + "3");
            }
        }
        void output_akhir() override{
            cout << jml_jawaban << endl;
            for(short i = 0; i < jml_jawaban; i++){
                cout << jawaban[i] << '\n';
            }
        }
};

int main(int argc, char const *argv[]){
    Quad jo;
    jo.isi_power_2();
    jo.alokasi_array();
    jo.input_elemen_array();
    jo.kodekan(0, 0, jo.power_2, "");
    jo.output_akhir();
}
