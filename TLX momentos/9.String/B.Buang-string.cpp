#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int banyak = t.length();
    int posisi;
    // jadi, karena stringnya cuma sampe 100, jadi bisa dibatesin sesuai indeks
    while(s.find(t) >= 0 and s.find(t) < 100){
        posisi = s.find(t);
        s.erase(posisi, banyak);
    }


    cout << s << endl;
    /*int posisi = s.find(t);
    s.erase(posisi, banyak);
    cout << s;
    */
}