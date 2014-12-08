#include<iostream>
using namespace std;

int getnumber(); //Gets the desire number to compute the collatz conjeture 
int evennumber(int n);
int oddnumber(int n);


int main(){
	int number(0);
	int iterations(0);
	cout << "Please enter a integer number bigger than zero: ";
	number = getnumber();
	while (number != 1)
	{
		int computation(0);
		int eval(0);
		if (number % 2 == 0 && eval ==0 )
		{
			computation = evennumber(number);
			eval = 1;
		}
		if (eval == 0)
		{
			computation = oddnumber(number);
		}
		cout << "The following number in the sequence is: " << computation << endl;
		number = computation;
		iterations++;
		cout << "this is the iteration: " << iterations << endl;

	}
	cout << "The last number in  the sequence : " << number << endl;
}


int getnumber(){
	int number(0);
	cin >> number;
	return number;
}

int evennumber(int n){
	n = n / 2;
	return n;
}

int oddnumber(int n){
	n = 3 * n + 1;
	return n;
}