#include <iostream>
#include <cmath>

using namespace std;

void Faktorisasi_Prima(int n){
    //jadi, kita akan ngecek dulu bilangan yang dapat diibagi n, terus, kalau masih bisa dibagi, bagi lagi
    for(int i = 2; i <= sqrt(n); i++){
        int penghitung = 0;
        while(n % i == 0){
            n /= i;
            penghitung++;
        }
        
        if(penghitung > 0){
            cout << i;
            if(penghitung > 1){
                cout << '^' << penghitung;
            }
            if(n > 1){
                cout << " x ";
            }
        }

       
    }
    //misalnya ada sisa, bilangan yang emang prima
    if(n > 1){
        cout << n;
    }
}

int main(){
    int n;
    cin >> n;

    Faktorisasi_Prima(n);

    cout << endl << endl << endl;
}