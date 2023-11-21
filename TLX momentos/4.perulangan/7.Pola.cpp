#include <iostream>
using namespace std;

int main(){
	unsigned short n,k,a;
	cin>>n>>k;
	if(n>=k){
	
		for(a=1;a<=n;a++){
			if(a%k==0)
			cout<<'*';
			else 
			cout<<a;
			if(a%n!=0)
			cout<<' ';
			else
			cout<<endl;
		}
		
	}
}
