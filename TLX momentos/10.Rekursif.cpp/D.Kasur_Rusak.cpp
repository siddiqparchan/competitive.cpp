#include <iostream>
#include <string>

using namespace std;

int main(){
    string kata;
    cin >> kata;

    bool palindrom = true;
    //bikin pake looping dulu
    int j = kata.length() - 1;
    for(int i = 0; i <= j; j--){
        if(kata[i] == kata[j]){
            kata.erase(j, 1);
            kata.erase(i, 1);
            j--;
        }else{
            palindrom = false;
            break;
        }
    }

    if(palindrom){
        cout << "YA" << endl;
    }else{
        cout << "BUKAN" << endl;
    }
}