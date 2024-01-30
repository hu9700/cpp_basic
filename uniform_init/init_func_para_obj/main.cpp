// C++ program to demonstrate how to
// initialize a function parameter
// using Uniform Initialization

#include <iostream>
using namespace std;

// declaring a class 'A'
class A {

	// a and b are data members
	int a;
	int b;

public:
	A(int x, int y)
		: a(x)
		, b(y)
	{
	}
	void show() { cout << a << " " << b; }
};

void f(A x) { x.show(); }

// Driver Code
int main()
{

	// calling function and initializing it's argument
	// using brace initialization
	f({ 1, 2 });
	return 0;
}
