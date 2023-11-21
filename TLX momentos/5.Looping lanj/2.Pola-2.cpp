//segitiga siku rata kanan
#include <iostream>
using namespace std;

int main(){
	unsigned short n,a,b,c;
	cin>>n;
	for(a=1;a<=n;a++){
		for(b=n;b>a;b--){
			cout<<' ';
		}
		for(c=1;c<=a;c++){
			cout<<'*';
		}
		cout<<endl;
	}
}