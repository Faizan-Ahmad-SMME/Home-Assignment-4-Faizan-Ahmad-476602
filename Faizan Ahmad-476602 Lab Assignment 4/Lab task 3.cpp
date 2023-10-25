#include<iostream>
using namespace std;
int main() {
	
	double x=0, y=0, z=1;
	
	cout<<"Enter a number:"<<endl;
	cin>>y;
	
	for (x=0; x<y; x++) {
		
		z = z* (y - x);
		
	}
	
	cout<<"The factorial of you number is:"<<z;
	
	
	
}
