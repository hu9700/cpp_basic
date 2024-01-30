// C++ program to demonstrate initialization
// of dynamic array in C++ using uniform initialization
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// declaring a dynamic array
	// and initializing using braces
	int* pi = new int[5]{ 1, 2, 3, 4, 5 };

	// printing the contents of the array
	for (int i = 0; i < 5; i++)
		cout << *(pi + i) << " ";
}
