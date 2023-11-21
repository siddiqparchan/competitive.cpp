#include <iostream>
#include <string>

using namespace std;

int main(){
    string kata;
    cin >> kata;

    short batas = kata.length();

    for(short i = 0; i < batas; i++){
        if(kata[i] < 97){
            kata[i] += 32;
        }else{
            kata[i] -= 32;
        }
    }

    cout << kata << endl;
}