#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[101];
    
    cout << "Masukkan sebuah kata atau kalimat akan saya cari panjangnya: ";
    cin >> str;
    //cara cari panjang str= dg pakai function strlen(str)

    cout << strlen(str) << endl;
}