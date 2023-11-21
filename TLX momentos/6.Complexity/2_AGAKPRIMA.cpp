#include <iostream>
using namespace std;

int main(){
	//Input n
	unsigned short n;
	cin>>n;
	
	//nilai bool agak prima, dinamakan apr
	bool apr[n];
	//Mengisi tiap array
	for(short a = 0; a < n; a++){
		apr[a]=true;
	}
	
	//deklarasi bilangan yang akan diuji
	unsigned int number[n];
	
	//deklrasi variabel jumlah faktor, diberi nama jf
	unsigned short jf[n];
	//Mengisi jf=1, karena dirinya sendiri juga merupakan faktor
	for(short z = 0; z < n; z++){
		jf[z]=1;
	}
	
	//Memulai input number
	for(short b = 0; b < n; b++){
		cin>>number[b];
		//Menghitung setiap faktor number yang diinputkan
		for(short c = 1; c <= number[b] / 2; c++){
			if (number[b] % c == 0){
				jf[b]++;
			}
		}
		//Jika faktornya lebih dari 4, maka dia !(agak prima)
		if(jf[b] > 4){
			apr[b] = false;
		}
	}
	
	//Output
	for(short d = 0; d < n; d++){
		if(apr[d] == true){
			cout << "YA" << endl;
		}
		else{
			cout << "BUKAN" << endl;
		}
	}
	return 0;
}