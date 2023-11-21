#include <iostream>

using namespace std;

void tukar(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void change(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 13;
    int y = 16;

    tukar(x, y);

    cout << "Pakai fungsi tukar: " << x << ' ' << y << endl;

    change(x, y);
    cout << "Pakai fungsi change: " << x << ' ' << y;
}