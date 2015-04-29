/* Author:			Justino Mora
 * Date:			April 29, 2015 
 * Project:			Factorial Solver 
 * Description:		This simple program finds the factorial of a positive number 
 *					and displays the result to the user. 
*/ 
#include <iostream> 

using namespace std; 

double factorial(double n); 

int main(){
	cout << " ------------------ Factorial Solver ---------------------" << endl; 	

	double userInput = 0; // Holds user input 

	cout << "Enter a number to find its factorial (enter -1 to exit): "; 
	cin >> userInput; 
	
	while( userInput >= 0 ) // Accepts only zero or positive values 
	{
		cout << "The factorial of " << userInput << " is " << factorial(userInput) 
			 << endl << endl; 

		cout << "Enter a number to find its factorial (enter -1 to exit): "; 
		cin >> userInput; 
	}

}

double factorial(double n)
{
	if( n == 0 || n == 1) // Base case
		return 1; 

	return ( n * factorial(n-1)); 
}