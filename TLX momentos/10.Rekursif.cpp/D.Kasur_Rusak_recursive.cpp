#include <iostream>
#include <string>

using namespace std;

string p(string kata){
    size_t x = kata.length();
    if(x == 1){
        return "YA";
    }
    else if(x == 2){
        if(kata[0] == kata[1]){
            return "YA";
        }else{
            return "BUKAN";
        }
    }
    else{
        if(kata[0] == kata[x - 1]){
            kata.erase(x - 1, 1);
            kata.erase(0, 1);
            return p(kata);
        }else{
            return "BUKAN";
        }        
    }
}

int main(){
    string kata;
    cin >> kata;

    cout << p(kata) << endl;
}