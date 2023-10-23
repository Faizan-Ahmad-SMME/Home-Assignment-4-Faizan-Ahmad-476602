//------------------------------------------------------------------------------------------------------------------------------------------------------------
//This code is written by Faizan Ahmad 476602 section A, the code covers task 2 from the lab manual 4.

#include<iostream>
using namespace std;
int main() {
	
	//Task 2
	//Write a C++ program tp find the sum of digets of a number.
	//The sum of the digits means adding all the digits of any number, for example, we take any number like 348. its sum of all digits
	//is 3 + 5 + 8 = 16
	
	int x, y, sum=0; //i used integer because the input must be a integer to work.
					 //moreover during the calculation process it will be helpful to use int
					 
					 //the 3 integers defined are x(which is out input), y is the remainder and sum is the final product of the digits
    cout<<"Enter the Number: "<<endl; // simple prompt that asks for an integer input
    cin>>x;
    while(x>0)   	 //i used while because the code should stop once ive reached the last digit.
    {
    				 //to explain the following set of equations i'll take input example 365, first of all y = x%10 means the remainder when 365 is 
    				 //divided by 10, (365 % 10 = 5) hence our first sum is 0 + 5 = 5, then we divide x by 10 leaving us with 36.5 however because 36.5 is not 
    				 //an integer the code only reads 36 this is what we want since now we can loop the code and find the remainder of 36 % 10 = 6
    				 //this loop goes on until we reach 3 / 10 = 0.3, this is read by the code as 0 and since our while condition was x>0 the code breaks.
        y = x%10;
        sum = sum+y;
        x = x/10;
        			 //by the end we have 5 + 6 + 3 = 14
    }
    cout<<"Sum of Digits = "<<sum; // the output is the sum of all the digits 'sum'
    cout<<endl;	
return 0;
}































