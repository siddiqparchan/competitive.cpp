#include <iostream>

using namespace std;

int fak(int n){
    if(n == 1){
        return 1;
    }else{
        int n_1 = n - 1;
        if(n % 2 == 0){
            return n/2 * fak(n_1);
        }else{
            return n * fak(n_1);
        }
    }
}

int main(){
    int n;
    cin >> n;

    cout << fak(n) << endl;
}