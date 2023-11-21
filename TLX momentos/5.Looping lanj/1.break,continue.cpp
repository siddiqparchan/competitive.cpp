#include <iostream>
using namespace std;
int main(){
	unsigned short n,a;
	cin>>n;
	for(a=1;a<=n;a++){
		if(a==42){
			cout<<"ERROR";
			break;
		}
		if(a%10==0){
			continue;
		}
		cout<<a<<endl;
		
	}
}