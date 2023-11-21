#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// logika loopingnya
string to_biner(int &n){
    string kembalian;
    while(n > 1){
        if(n % 2 == 0){
            kembalian.insert(0, "0");
        }else{
            kembalian.insert(0, "1");
        }
        n /= 2;
    }
    if(n == 1){
        kembalian.insert(0, "1");
    }
    return kembalian;
}

void inttostr(int a, string &s){
    stringstream temp;
    temp << a;
    temp >> s;
}

string to_binary(int &n){
    if(n == 1){
        return "1";
    }else{
        if(n % 2 == 0){
            n /= 2;
            return to_binary(n) + "0";
        }else{
            n /= 2;
            return to_binary(n) + "1";
        }
    }
}

int main(){
    int n;
    while(cin >> n){
        cout << to_binary(n) << endl;
    }
}