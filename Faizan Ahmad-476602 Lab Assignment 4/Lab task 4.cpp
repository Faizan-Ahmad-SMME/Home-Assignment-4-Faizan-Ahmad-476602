#include<iostream>
using namespace std;
int main () {
	
	int x=0, y=0, z1=0, z2=1, sum=0;
	
	cout<<"Enter a number"<<endl;
	cin>>y;
	cout<<"The fibonacci sequence up to "<<y<<" is:"<<endl;
	cout<<"0, 1, ";
	
	for (x=0; x<(y-2); x++) {
		
		sum = z1 + z2;
		
	cout<<sum<<", ";	
	
	z1 = z2;
	z2 = sum;
	sum = 0;	
	}
return 0;	
}
