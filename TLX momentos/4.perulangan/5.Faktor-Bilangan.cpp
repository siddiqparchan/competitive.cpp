#include <iostream>
using namespace std;

int main(){
	unsigned int n,a;
	cin>>n;
	for(a=n;a>0;a--){
		if(n%a==0)
		cout<<a<<endl;
	}
}