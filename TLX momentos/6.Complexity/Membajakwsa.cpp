#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a,b,r,c,x,y;
	cin>>n;
	r=1;
	c=n;
	for(a=1;a<=n;a++){
		for(b=1;b<=n;b++){
			if(a*b==n){
				x=abs(r-c);
				y=abs(a-b);
				if(x>y){
					r=a;
					c=b;
				}
			}
		}
	}
	cout<<r<<' '<<c;
}