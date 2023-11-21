#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string cases;
    while(cin >> cases){
    //jika ditemukan '_'
    if(cases.find('_') != string::npos){
        while(cases.find('_') != string::npos){
            short posisi = cases.find('_');
            cases.erase(posisi, 1);
            cases[posisi] = toupper(cases[posisi]);
        }
    }
    //kalau ga ketemu, maka caseCaseCase atau casecasecase
    else{
        string baru_banh;
        for(char i : cases){
            if(isupper(i)){
                baru_banh += '_';
                baru_banh += tolower(i);
            }else{
                baru_banh += i;
            }
        }
        cases = baru_banh;
    }

    //end of code
    cout << cases << endl;
    }
}