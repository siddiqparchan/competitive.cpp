#include <bits/stdc++.h>
using namespace std;

class Fibonacci{
    public:
        long long fn;
        bool *is_dicoba;
        long long *dicoba;
        long long fibonacci(long long fn){
            if(is_dicoba[fn - 1] == true){
                return dicoba[fn - 1];
            }
            else if(fn == 1){
                return 1;
            }
            else if(fn == 2){
                return 2;
            }
            else{
                is_dicoba[fn - 1] = true;
                dicoba[fn - 1] = fibonacci(fn - 1) + fibonacci(fn - 2);
                return dicoba[fn - 1];
            }
        }
        ~Fibonacci(){
            delete[] dicoba;
            delete[] is_dicoba;
        }
};

int main(int argc, char const *argv[]){
    Fibonacci N;
    cin >> N.fn;
    N.is_dicoba = new bool[N.fn];
    N.dicoba = new long long[N.fn];
    //fill
    for(long long i = 0; i < N.fn; i++){
        N.is_dicoba[i] = false;
    }
    cout << N.fibonacci(N.fn);
}
