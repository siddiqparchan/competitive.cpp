//No array
#include <iostream>
using namespace std;

int main(){
	//Input n + hal yg dibutuhin
	unsigned int n, number;
	unsigned short jf;
	cin >> n;
	bool apr;
	string a,b;
	
	for(short i = 1; i <= n; i++){
		apr = true;
		jf = 1;
		cin >> number;
		
		for(short j = 1; j <= number/2; j++){
			if(number % j == 0){
				jf++;
			}
		}
		
		//benar atau salah
		if(jf > 4){
			apr = false;
			a = "BUKAN\n";
		}
		else{
			a = "Ya\n";
		}
		
		//Pengstringan
		b = b + a;
	}
	
	//end
	cout << b;
	return 0;
}