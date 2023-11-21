#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//input
	unsigned int n,number;
	string a,b;
	bool prima;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> number;
		prima = true;
		//pengecekan
		if(number < 2){
			prima = false;
		}
		else{
			for(int j = 2; j <= sqrt(number); j++){
				if(number % j == 0){
					prima = false;
					break;	
				}
			}
		}
		//pengstringan
		if(prima == true){
			a = "YA\n"; 
		}
		else{
			a = "BUKAN\n";
		}
		b = b + a;
	}
	cout << b;
	return 0;
}