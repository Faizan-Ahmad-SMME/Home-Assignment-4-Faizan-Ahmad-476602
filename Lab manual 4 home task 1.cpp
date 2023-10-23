//----------------------------------------------------------------------------------------------------------------------------------
// This code was written by Faizan Ahmad 476602 section A, this code is for the home tasks 1/3 found in the lab manual 4.
#include<iostream>
using namespace std;
int main() {
	
	//Task 1
	//Write a program that prints the numbers 1 to 150 except the multiples of 10, make use of the continue statment.
	
	int y=1;
	
	for ( int x=0; x<150; x++ ) {//the limits are defined and so the loop will run 149 times 
		
		if ( x % 10 == 0 ) { //this first if statment checks if the integer x is a multiple of 10 or not.
			continue; //if true then the continue function skips this number and moves on to the next loop.
		}
		else {   // if not then the number is outputted. 
			cout<<x<<", ";
		}
	
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
