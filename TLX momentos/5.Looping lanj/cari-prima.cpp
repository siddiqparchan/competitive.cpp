#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a = 1;
	int b;
	int pr = 2;
	bool prima;
	prima = true;
	while(a <= n){
		for(b = 2; b < pr; b++){
			if(pr % b == 0){
				prima = false;
				break;
			}
		}
		if(prima){
			cout << pr << endl;
			a++;
		}
		pr++;
	}
}