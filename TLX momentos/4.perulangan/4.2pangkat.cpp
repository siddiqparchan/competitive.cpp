#include <iostream>
using namespace std;

int main(){
	unsigned int n;
	cin>>n;
	while(n%2==0){
		n/=2;
	}
	if(n==1) cout<<"ya";
	else cout<<"bukan";	
}