#include <iostream>

using namespace std;

int main(){
    long long inputan;
    bool is_on = true;

    cin >> inputan;

    for(long long i = 2; i <= inputan; i++){
        if(inputan % i == 0){
            if(is_on == true){
                is_on = false;
            }else{
                is_on = true;
            }
        }
    }

    //end
    if(is_on == true){
        cout << "lampu menyala" << endl;
    }else{
        cout << "lampu mati" << endl;
    }
}
