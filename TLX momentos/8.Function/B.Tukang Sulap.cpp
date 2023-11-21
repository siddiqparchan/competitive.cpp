#include <iostream>

using namespace std;

void inarray(int *array, int elemen){
    for(short i = 0; i < elemen; i++){
        cin >> *(array + i);
    }
}

void outarray(int *array, int elemen){
    for(short i = 0; i < elemen; i++){
        cout << *(array + i) << ' ';
    }
    cout << endl;
}

int temp; 
void tukar(int &a, int &b){
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int N;
    cin >> N;
    
    int A[N];
    inarray(A, N);

    int B[N];
    inarray(B, N);

    short T;
    cin >> T;

    char masuk1;
    char masuk2;

    short x, y;

    for(short i = 0; i < T; i++){
        cin >> masuk1;
        cin >> x;
        cin >> masuk2;
        cin >> y;

        if(masuk1 == 'A'){
            if(masuk2 == 'A'){
                tukar(A[x - 1], A[y- 1]);
            }else if(masuk2 == 'B'){
                tukar(A[x - 1], B[y - 1]);
            }
        }else if(masuk1 == 'B'){
            if(masuk2 == 'B'){
                tukar(B[x - 1], B[y - 1]);
            }else if(masuk2 == 'A'){
                tukar(B[x - 1], A[y - 1]);
            }
        }
    }

    outarray(A, N);
    outarray(B, N);
}