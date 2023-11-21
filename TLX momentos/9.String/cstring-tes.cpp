#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char st[10] = "123456789"; // yang bisa dihasilkan array of char adalah sebanyak (indek-1) 
    cout << "sebelum dirubah: " << st << endl;

    for(short i = 0; st[i] != '\0'; i++){
        st[i] = i + 97;
    }

    cout << "setelah dirubah: " << st;

    //eof
    cout << endl;
    return 0;
}