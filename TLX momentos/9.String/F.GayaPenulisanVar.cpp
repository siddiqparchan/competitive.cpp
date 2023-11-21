#include <iostream>
#include <string>

using namespace std;

int main(){
    string cases;
    cin >> cases;

    short posisi;
    char erere;
    string pengganti;

    //jika case_case
    if(cases.find('_') != string::npos){
        while(cases.find('_') != string::npos){
            posisi = cases.find('_');
            erere = toupper(cases[posisi + 1]);
            pengganti = erere;
            cases.replace(posisi, 2, pengganti);
        }
    }
    //jika caseCAseCase
    else{
        short batas = cases.length();
        for(short i = 1; i < batas; i++){
            if(!islower(cases[i])){
                cases[i] = tolower(cases[i]);
                string nump = "_";
                cases.insert(i, nump);
                batas++;
            }
        }
    }

    //end of code
    cout << cases << endl;
}