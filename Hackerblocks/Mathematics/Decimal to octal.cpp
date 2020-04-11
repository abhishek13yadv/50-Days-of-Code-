#include <iostream> 
using namespace std; 
void decToOctal(long long int n) 
{ 
	long long int octalNum[100]; 

	// counter for octal number array 
	long long int i = 0; 
	while (n != 0) { 

		// storing remainder in octal array 
		octalNum[i] = n % 8; 
		n = n / 8; 
		i++; 
	} 

	// printing octal number array in reverse order 
	for (long long int j = i - 1; j >= 0; j--) 
		cout << octalNum[j]; 
} 

// Driver program to test above function 
int main() 
{ 
	long long int n ; 
	cin>>n;
	decToOctal(n); 

	return 0; 
} 
