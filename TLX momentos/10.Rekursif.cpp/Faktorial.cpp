#include <iostream>

using namespace std;

int faktorial(int &n){
    if(n == 1){
        return 1;
    }else{
        int n_1 = n - 1;
        return n * faktorial(n_1);
    }
}

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 1;
    }else{   
        cout << faktorial(n) << endl;
    }
}