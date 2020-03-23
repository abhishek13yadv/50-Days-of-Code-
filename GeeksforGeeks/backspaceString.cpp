 #include <bits/stdc++.h> 
using namespace std; 
 
string newString(string S) 
{ 
	deque<char> q; 

	for (int i = 0; i < S.length(); ++i) { 

		if (S[i] != '#') 
			q.push_back(S[i]); 
		else if (!q.empty()) 
			q.pop_back(); 
	} 

	// build final string 
	string ans = ""; 

	while (!q.empty()) { 
		ans += q.front(); 
		q.pop_front(); 
	} 
 
	return ans; 
} 

 
int main() 
{ 
	string S ; 
  cin>>S;
	cout << newString(S); 

	return 0; 
} 

