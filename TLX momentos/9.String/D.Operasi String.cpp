#include <iostream>
#include <string>

using namespace std;

void hapus_dua_yang_ada_di_satu(string &satu, string &dua){//dua pakai reference hanya untuk hemat memori
    satu.erase(satu.find(dua), dua.length());
}

void masukkan_empat_setelah_tiga_di_satu(string &satu, string &tiga, string &empat){
    satu.insert((satu.find(tiga) + tiga.length()), empat);
}

int main(){
    string satu, dua, tiga, empat;
    cin >> satu >> dua >> tiga >> empat;

    //jadi hapus string 2 yang ada di satu dulu
    hapus_dua_yang_ada_di_satu(satu, dua);

    //lalu masukkan empat setelah 3 di satu
    masukkan_empat_setelah_tiga_di_satu(satu, tiga, empat);

    //output deh
    cout << satu << endl;

}