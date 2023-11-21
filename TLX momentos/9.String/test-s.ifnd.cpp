#include <iostream>
#include <string>

using namespace std;

int main(){
    string bapak = "anjayalok";
    short panjang = bapak.length();
    for(short i = 0; i < panjang; i++){
        bapak[i] -= 32;
    }

    cout << bapak << endl;
}