// CPP program to illustrate 
// Linear Search 
#include <iostream> 
using namespace std; 

void findElement(int arr[], int size, int key) 
{ 
	// loop to traverse array and search for key 
	for (int i = 0; i < size; i++) { 
		if (arr[i] == key) { 
			cout << "Element found at position: " << (i + 1); 
		} 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	int n,key;
  	cin>>n>>key;
  	int arr[n];
  	for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

	// Calling function to find the key 
	cout<<findElement(arr, n, key)<<endl; 

	return 0; 
} 
