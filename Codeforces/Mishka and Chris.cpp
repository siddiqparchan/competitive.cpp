#include <bits/stdc++.h>
using namespace std;

main(){
    int N;
    cin >> N;

    int M, C;
    int Mi = 0;
    int Ch = 0;

    for(int i = 0; i < N; i++){
        cin >> M >> C;
        if(M > C){
            Mi++;
        }else if(C > M){
            Ch++;
        }
    }

    if(Mi > Ch){
        cout << "Mishka";
    }else if(Ch > Mi){
        cout << "Chris";
    }else{
        cout << "Friendship is magic!^^";
    }
}