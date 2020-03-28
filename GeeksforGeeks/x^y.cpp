// C++ program to check if a given number can be expressed 
// as power 
#include <bits/stdc++.h> 
using namespace std; 

// Returns true if n can be written as x^y 
bool isPower(unsigned n) 
{ 
	if (n==1) return true; 

	// Try all numbers from 2 to sqrt(n) as base 
	for (int x=2; x<=sqrt(n); x++) 
	{ 
		unsigned y = 2; 
		unsigned p = pow(x, y); 

		// Keep increasing y while power 'p' is smaller 
		// than n. 
		while (p<=n && p>0) 
		{ 
			if (p==n) 
				return true; 
			y++; 
			p = pow(x, y); 
		} 
	} 
	return false; 
} 

// Driver Program 
int main() 
{ 
	for (int i =2; i<100; i++) 
		if (isPower(i)) 
		cout << i << " "; 
	return 0; 
} 
