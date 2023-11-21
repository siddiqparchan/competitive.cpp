#include <iostream>
#include <cmath>
#include <cstring>

#define ll long long
#define sp cout << endl;

using namespace std;

int banyak_kedekatan(int n){
    n = n - 1;
    int temp = 0;
    for(short i = 1; i <= n; i++){
        temp += i;
    }
    return temp;
}

int main(){
    int murid;
    int konstant;

    //input
    cin >> murid >> konstant;
    int kedekatan_1[murid];
    int kedekatan_2[murid];
    int hasil[murid][murid];

    for(short i = 0; i < murid; i++){
        cin >> kedekatan_1[i] >> kedekatan_2[i];
    }

    int jumlah_kedekdaatan = banyak_kedekatan(murid);
    int min;
    int max;

    for(short i = 0; i < murid; i++){
        for(short j = 0; j < murid; j++){
            //pengecekan hanya akan dilakukan jika i dan j berbeda
            if(i != j){
                hasil[i][j] = pow(abs(kedekatan_1[j] - kedekatan_1[i]),konstant) + pow(abs(kedekatan_2[j] - kedekatan_2[i]),konstant);
                if(i == 0 and j == 1){
                    min = hasil[i][j];
                    max = min;
                }else{
                    if(hasil[i][j] < min){
                        min = hasil[i][j];
                    }
                    if(hasil[i][j] > max){
                        max = hasil[i][j];
                    }
                }
            }
        }
    }

    cout << min << ' ' << max;
    sp;
    return 0;
}