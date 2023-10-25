#include<iostream>
using namespace std;
int main() {
	
	int  p, r, q, w, x, y, z;
	
	cout<<"Enter the values of p, r, q, w, x, and y:";
	cin>>p>>r>>q>>w>>x>>y;
	
	z=p* r%q + w/x -y;
	
	cout<<"Result of the expresstion z = p*r%q+w/x-y is:"<<z<<endl;
	
	return 0;
}


