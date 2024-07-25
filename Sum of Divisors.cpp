/*Write a function int sumDivisors(int number) { … }
that takes an integer as a parameter, and returns the sum of its divisors.For example, if the number is 12, it
will return 28 (1 + 2 + 3 + 4 + 6 + 12).Incorporate the function above in a program that asks the user to enter an
integer, calls the function, then displays the result.
Rewrite the function above by making parameter number a global variable.
Rewrite the function above using passing by reference.The header of the function must be as follows :
void sumDivisors(int& result, int number) { … }*/

#include <iostream>
int number;			//global variable
int total;			//global variable
using namespace std;
//
//void sumDivisors(int &total, int number) {				//Passing by reference
//	int total1 = 0;
//	for (int i = 1; i <= number; i++) {
//		if (number % i == 0) {
//			total1 += i;
//		}
//	}cout << "The sum of its divisor is: " << total1;
//}

int sumDivisor(int number) {								//Passing by value
	int total1 = 0;
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			total1 += i;
		}
	}return total1;
}

int main()
{
	cout << "Please Enter a DIGIT: " << endl;
	cin >> number;
	//int* ptr = &total;
	//sumDivisors(*ptr, number);
	int output=sumDivisor(number);
	cout << "The sum of its divisor is: " << output << endl;
}
