#include <iostream>
#include <string>

using namespace std;

int main(){
    //persiapan adik-adik
    string s;
    short konstant;
    cin >> s >> konstant;

    //ayo kita mulai operasinya
    int panjang_s = s.length();
    
    //dari hint
    for(int i = 0; i < panjang_s; i++){
        s[i] = (s[i] + konstant - 'a') % 26 + 'a';
    }
    
    
    /*
    // asli saya
    for(int i = 0; i < panjang_s; i++){
        if((s[i] + konstant) > 122){
            s[i] - 26;
        }
        s[i] = s[i] + konstant;
    }
    */

    cout << s << endl;
}