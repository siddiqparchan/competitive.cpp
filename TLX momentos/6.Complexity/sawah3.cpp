#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a,b,r,c;
	cin>>n;
	r=1;
	c=n;
	int coy = sqrt(n);
	coy =(int)coy;
	for(a=1;a<=coy;a++){
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