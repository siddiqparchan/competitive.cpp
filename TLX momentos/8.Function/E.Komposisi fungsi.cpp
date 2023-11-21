#include <iostream>
#include <cmath>

using namespace std;


int bacot = 0;
int gbackot = 0;

/*int fungsi(int &a, int &b, int &k, int &x){
    if(k == 1){
        return abs(a*x + b);
    }
    else{
        bacot = k-1;
        gbackot = abs(a*x + b);
        return fungsi(a, b, bacot, gbackot);
    }
}*/

int fungsi(int &a, int &b, int &k, int &x){
    int hasil;
    for(short i = 0; i < k; i++){
        hasil = abs(a * x + b);
        x = abs(a * x + b); 
    }
    return hasil;
}

main(){
    int a, b, k, x;
    cin >> a >> b >> k >> x;

    cout << fungsi(a, b, k, x);

}