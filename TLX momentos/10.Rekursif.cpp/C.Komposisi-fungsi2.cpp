#include <iostream>
#include <cmath>

using namespace std;

int A, B, K, X;

int f(int K, int X){
    if(K == 1){
        return abs(A*X + B);
    }else{
        int K_1 = K - 1;
        int X_s = abs(A*X + B);
        return f(K_1, X_s);
    }
}

int main(){
    cin >> A >> B >> K >> X;

    if(K == 0){
        cout << X;
    }else{
        cout << f(K, X) << endl;
    }
}