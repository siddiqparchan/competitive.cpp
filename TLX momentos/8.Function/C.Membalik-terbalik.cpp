#include <iostream>
#include <sstream>
using namespace std;

void nambah(string &a, int b){
    stringstream k;
    string tempp;
    k << b;
    k >> tempp;
    a += tempp;
}

void stoint(int &a, string b){
    stringstream k;
    k << b;
    k >> a;
}

void balik(int &a){
    string balik;
    int &real = a;
    int temp;
    for(short i = 0; i < 7; i++){
        if(real == 0){
            break;
        }
        temp = real;
        real /= 10;
        nambah(balik, temp % 10);
    }
    stoint(real, balik);
}

int main(){
    int a, b;
    cin >> a >> b;
    balik(a);
    balik(b);
    int c = a+b;
    balik(c);
    cout << c;
}