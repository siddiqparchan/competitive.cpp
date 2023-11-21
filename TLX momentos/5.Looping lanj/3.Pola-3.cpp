#include <iostream>
using namespace std;
int main(){
	unsigned short b,n,a,c;
	cin>>n;
	for(c=0,a=1;a<=n;a++){
		for(b=1;b<=a;b++,c++){
			if(c==10){
				c=0;
			}
			cout<<c;
		}
		cout<<endl;
	}
}