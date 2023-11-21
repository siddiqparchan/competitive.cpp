#include <iostream>
#include <vector>
using namespace std;
#define paramet int t, vector<int> &ans 

void rounded(paramet){
    ans.push_back(t);
}
void more_than_9(paramet){
    if(t % 10 == 0){
        rounded(t, ans);
    }else{
        rounded(t % 10, ans);
        more_than_9(t - (t % 10), ans);
    }
}
void more_than_99(paramet){
    if(t % 100 == 0){
        rounded(t, ans);
    }else{
        if(t % 10 == 0){
            more_than_9(t % 100, ans);
            more_than_99(t - (t % 100), ans);
        }else{
            rounded(t % 10, ans);
            more_than_99(t - (t % 10), ans);   
        }
    }
}
void more_than_999(paramet){
    if(t % 1000 == 0){
        rounded(t, ans);
    }else{
        if(t % 100 == 0){
            more_than_99(t % 1000, ans);
            more_than_999(t - t % 1000, ans);
        }else{
            if(t % 10 == 0){
                more_than_9(t % 100, ans);
                more_than_999(t - (t % 100), ans);
            }else{
                rounded(t % 10, ans);
                more_than_999(t - (t % 10), ans);   
            }
        }
    }
}

main(){
    int N;
    cin >> N;

    int T[N];

    for(int i = 0; i < N; i++){
        cin >> T[i];
    }

    for(int i = 0; i < N; i++){
        vector<int> ans;

        if(T[i] / 1000 > 0){
            more_than_999(T[i], ans);
        }else if(T[i] / 100 > 0){
            more_than_99(T[i], ans);
        }else if(T[i] / 10 > 0){
            more_than_9(T[i], ans);
        }else{
            rounded(T[i], ans);
        }

        int temp = ans.size();
        ans.reserve(temp);

        cout << temp << '\n';

        for(int &i : ans){
            cout << i << ' ';
        }
        cout << '\n';
    }
}