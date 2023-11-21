#include <bits/stdc++.h>
using namespace std;

main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        bool ok = true;
        string a, b;
        int len;
        
        cin >> len;
        cin >> a >> b;

        for(int i = 0; i < len; i++){
            if(a[i] != b[i]){
                if(a[i] == 'R' or b[i] == 'R'){
                    cout << "NO\n";
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            cout << "YES\n";
        }
    }
}