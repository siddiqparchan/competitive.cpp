//Pakai Array
#include <cmath>
#include <iostream>
using namespace std;

int main(){
	unsigned short n;
	
	cin >> n;
	unsigned int number[n];
	
	bool prima[n];
	for(short a = 0; a < n; a++){
		prima[a] = true;
	}
	
	for(short i = 0; i < n; i++){
		cin >> number[i];
	}
	for(short k = 0; k < n; k++){
		if(number[k] <= 1){
			prima[k] = 0;
		}
		else{
			for(int j = 2; j <= sqrt(number[k]); j++){
				if(number[k] % j ==0){
					prima[k] = 0;
					break;
				}
			}
		}
	}
	for(short l = 0; l < n; l++){
		if(prima[l] == true){
			cout << "YA" << endl;
		}
		else{
			cout << "BUKAN" << endl;
		}
	}
}