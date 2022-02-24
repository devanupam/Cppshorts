// C++ 14 program to illustrate the
// return type deduction
#include <iostream>
using namespace std;

// Function to increment the
// value of a
 decltype(auto) increase(int& a)
{
	// Increment a
	a++;

	// Return the updated value
	return a;
}

// Driver Code
int main()
{
	int b = 10;

	// Function Call
	int& c = increase(b);

	// Print the value b and c
	cout << b << c;
	return 0;
}
