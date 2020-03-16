#include<bits/stdc++.h>
using namespace std;

void merge(int array[], int left, int middle, int right) 
{ 
	int i, j, k; 
	int n1 = middle - left + 1; 
	int n2 = right - middle; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = array[left + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = array[middle + 1 + j]; 

	i = 0;
	j = 0; 
	k = left;
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			array[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			array[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) 
	{ 
		array[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		array[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void sort(int array[], int left, int right) 
{ 
	if (left < right) 
	{ 
		int middle = left + (right - left)/2; 

		sort(array, left, middle); 
		sort(array, middle + 1, right); 

		merge(array, left, middle, right); 
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
	
	sort(array, 0, n - 1);
	cout<<endl<<"An array has been successfully sorted:"<<endl; 
	output(array, n); 
	return 0; 
} 

