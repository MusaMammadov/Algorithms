#include<bits/stdc++.h> 
using namespace std; 

int f_n(int n) 
{ 
	if (n <= 1) 
		return n; 
	return f_n(n - 1) + f_n(n - 2); 
} 

int main () 
{ 
	int n;
	cin >> n; 
	cout << f_n(n); 
	return 0; 
} 
