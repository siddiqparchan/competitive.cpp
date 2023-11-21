#include <iostream>
using namespace std;

int main(){
	unsigned short n,c;
	int a,b,d;
	cin>>n;
	for(c=1;c<=n;c++){
		cin>>d;
		if (c==1){
			b=d;
			a=d;
			continue;
		}
		if(d<b){
			b=d;
		}
		else if(d>a){
			a=d;
		}
		
	}
	cout<<a<<' '<<b;
}