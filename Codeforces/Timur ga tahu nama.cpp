#include <bits/stdc++.h>
using namespace std;

main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int T;
        bool Tu = false;
        bool iu = false; 
        bool mu = false; 
        bool uu = false; 
        bool ru = false;
        bool temp = false;
        string S;
        cin >> T;
        cin >> S;

        if(T != 5){
            cout << "NO\n";
        }else{
            for(int i = 0; i < 5; i++){
                if(S[i] != 'T' and S[i] != 'i' and S[i] != 'm' and S[i] != 'u' and S[i] != 'r'){
                    cout << "NO\n";
                    temp = true;
                    break;
                }
                //kalau benar
                if(S[i] == 'T'){
                    if(Tu == false){
                        Tu = true;
                    }else{
                        cout << "NO\n";
                        temp = true;
                        break;
                    }
                }if(S[i] == 'i'){
                    if(iu == false){
                        iu = true;
                    }else{
                        cout << "NO\n";
                        temp = true;
                        break;
                    }
                }if(S[i] == 'm'){
                    if(mu == false){
                        mu = true;
                    }else{
                        cout << "NO\n";
                        temp = true;
                        break;
                    }
                }if(S[i] == 'u'){
                    if(uu == false){
                        uu = true;
                    }else{
                        cout << "NO\n";
                        temp = true;
                        break;
                    }
                }if(S[i] == 'r'){
                    if(ru == false){
                        ru = true;
                    }else{
                        cout << "NO\n";
                        temp = true;
                        break;
                    }
                }
            }
            //kalau no problem
            if(temp == false){
                cout << "YES\n"; 
            }
        }
    }
}