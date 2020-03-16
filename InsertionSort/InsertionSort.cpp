#include <bits/stdc++.h> 
using namespace std; 

void sort(int array[], int n) 
{ 
	int i, k, j; 
	for (i = 1; i < n; i++) 
	{ 
		k = array[i]; 
		j = i - 1; 

		while (j >= 0 && array[j] > k) 
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		} 
		array[j + 1] = k; 
	} 
} 

void output(int array[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
	{
		cout << "Element number "<<i+1<<": "<<array[i]<<endl;
	} 
	cout << endl; 
} 

int main() 
{ 
	int n;
	cout <<"Please enter size of an array: ";
	cin >> n;
	
	int array[n];
	cout << "Please enter elements of an array:"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout << "Element number "<<i+1<<": ";
		cin >> array[i];
	}
	
	sort(array, n);
	cout<<endl<<"An array has been successfully sorted:"<<endl; 
	output(array, n); 
	return 0; 
} 
