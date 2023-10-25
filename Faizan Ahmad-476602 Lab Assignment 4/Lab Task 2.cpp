#include<iostream>
using namespace std;
int main () {
	
	int x=0, y=0, z=1, t=0;
		
		cout<<"Enter a integer number:"<<endl;
		cin>>y;
		
	for (x=0 ; x<10 ; x++) {
		
		t = y * z;
		
		cout<<y<<"x"<<z<<"="<<t<<endl;
		
		z++;
	}
	return 0;
}
