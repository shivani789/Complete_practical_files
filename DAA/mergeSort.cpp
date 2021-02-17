#include<bits/stdc++.h>
using namespace std;

void merge(int array[], int low, int middle, int high)
{
	int n1 = middle - low + 1;
	int n2 = high - middle;
	int Left[n1], Right[n2];
	
	for(int i = 0; i < n1; i++)
		Left[i] = array[low + i];
		
	for(int j = 0; j < n2; j++)
		Right[j] = array[middle + 1 + j];
	// Initial index of first subarray
	int i = 0; 
	
	// Initial index of second subarray
	int j = 0; 
	
	// Initial index of merged subarray
	int k = low;
	
	while (i < n1 && j < n2)
	{
		if (Left[i] <= Right[j]) 
		{
			array[k] = Left[i];
			i++;
		}
		else
		{
			array[k] = Right[j];
			j++;
		}
		k++;
	}
 
	while (i < n1) 
	{
		array[k] = Left[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		array[k] = Right[j];
		j++;
		k++;
	}
}

void mergeSort(int array[], int low, int high)
{
	if (low < high)
	{
		int middle = low + (high - low) / 2;

		mergeSort(array, low, middle);
		mergeSort(array, middle + 1, high);

		merge(array, low, middle, high);
	}
} 
void printArray(int A[], int size)
{
	for(int i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{
	cout<<"Enter the size of the array:"<<endl;
	int size;
	cin>>size;
	int array[size];
	cout << "Enter the array elements: \n";
	for(int i=0;i<size;i++) cin>>array[i];

	printArray(array, size);
	mergeSort(array, 0, size - 1);

	cout << "\nSorted array is \n";
	printArray(array, size);
	return 0;
}

