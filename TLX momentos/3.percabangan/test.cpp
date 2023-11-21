#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int nilai;
char ch;
int main(){
    nilai=85;
    if(nilai>0){
        nilai+=4;
    }
    cout<<nilai;
    //Code before function ends:
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
    //Jadi sama seperti while, nilai yang dirubah di dalam if akan ngaruh ke luarnya
}