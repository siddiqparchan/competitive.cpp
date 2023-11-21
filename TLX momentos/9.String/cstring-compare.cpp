#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[101];
    char str2[101];
    cout << "masukkan 2 kata: ";
    cin >> str1 >> str2;

    int hasil = strcmp(str1, str2);
    bool o = false;
    if(hasil == 0){
        cout << "sama";
    }else if(hasil < 0){
        cout << "kata pertama lebih awal";
        o = 1;
    }
    else{
        cout << "kata kedua lebih awal";
        o = 1;
    }
    if(o){
        cout << " Dalam Binary";
    }
    cout << endl;
}