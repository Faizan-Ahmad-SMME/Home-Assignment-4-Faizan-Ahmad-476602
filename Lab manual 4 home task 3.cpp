//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//This code was written by Faizan Ahmad 476602 section A, Task 3 lab manual 4
#include<iostream>
using namespace std;
int main () {
//Task 3
//The following code checks if a number is a prime number or not.	
	int x, y; // the integers defined are x (input number) and y (the number that is used in the calculations).
	
	cout<<"Enter a number"<<endl; //simple input promt
	cin>>x;
	
	if (x == 1 || x == 0) { //this first if checks if the input is 0 or 1, 0 and 1 are neither composite nor prime numbers.
		cout<<"Your number is neither a prime number nor a composite number"; 
	}
	
	for ( y = 2; y = x/2; y++ ) { //using 'for' we use the conditoon y=2 till y = x/2, the reasion behind using x/2 as our final limit is because 
								  //y/2 is the greatest number that can produce our input when multiplied by 2
		
		if ( x % y == 0 ) {       // this condition checks all the y values between the limits if they can divide x with no remainder.
			cout<<"Your number is a composite number";
			
		}
		else {                    // this else is exicuted if the prevous 'if' statment failed.
			cout<<"Your number is a prime number";

		}
	break;	                      // break used to stop the loop once an output is detected.
	}
	
	
return 0;	
}











