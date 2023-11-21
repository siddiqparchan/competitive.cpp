#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a,b,r,c;
	cin>>n;
	r=1;
	c=n;
	for(a=1;a<=n;a++){
		if(n%a==0){
			b=n/a;
			if(abs(r-c)>abs(a-b)){
				r=a;
				c=b;
			}
		}
		
	}
	cout<<r<<' '<<c;
}