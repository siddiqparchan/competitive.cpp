#include <iostream>
#include <cmath>


using namespace std;
int main(){
    int x1,y1,x2,y2,vert,hor;
    cin>>x1>>y1>>x2>>y2;
        vert=abs(x1-x2);
        hor=abs(y1-y2);
        cout<<vert+hor<<endl;
}