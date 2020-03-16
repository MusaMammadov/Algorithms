#include <bits/stdc++.h> 
using namespace std; 

void swap(int *number1, int *number2) 
{ 
	int temp = *number1; 
	*number1 = *number2; 
	*number2 = temp; 
} 

int partition(int array[], int low, int high) 
{ 
	int pivot = array[high]; 
	int i = (low - 1);  

	for (int j = low; j <= high - 1; j++) 
	{ 
		if (array[j] < pivot) 
		{ 
			i++; 
			swap(&array[i], &array[j]); 
		} 
	} 
	swap(&array[i + 1], &array[high]); 
	return (i + 1); 
} 

void sort(int array[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(array, low, high); 

		sort(array, low, pi - 1); 
		sort(array, pi + 1, high); 
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
