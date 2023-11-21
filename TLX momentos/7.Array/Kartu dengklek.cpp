#include <iostream>
using namespace std;

main(){
    short n;
    cout << "Masukkan jumlah card: "; cin >> n;

    short x[n];

    cout << "Masukkan nomernya: " << endl;
    for(short i = n-1; i >=0 ; i--){
        cin >> x[i]; 
    }
    cout << '[';
    for(short i = 0; i < n; i++){
        cout << x[i]; 
        if(i < n-1){
            cout << ',' << ' ';
        }
    }
    cout << ']';
}