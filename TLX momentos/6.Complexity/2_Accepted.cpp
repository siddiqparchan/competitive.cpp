#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned short n, jf;
	cin >> n;
	string a,b;
	unsigned int number;
	
	for(short i = 1; i <= n; i++){
		jf = 0;
		cin >> number;
		
		if(number <= 1){
			a = "YA\n";
		}
		else{
			for(int j = 2; j <= sqrt(number); j++){
				if(number % j == 0){
					jf++;
				}
			}
			if(jf <= 1){
				a = "YA\n";
			}
			else{
				a = "BUKAN\n";
			}
		}
		b = b + a; 
	}
	cout << b;
	return 0;
}
/*
	Pertanyaannya sekarang adalah, mengapa 2 file sebelumnya bisa salah.
	kayanya karena ada perhitungan yang akan berbeda kedepannya antara dengan hitung faktor manual,
	ataupun pakai sqrt(number);
	Ya kayanya ga tahu juga siapa yg salah
*/