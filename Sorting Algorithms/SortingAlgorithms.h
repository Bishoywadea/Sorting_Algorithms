#include<iostream>
using namespace std;

void SelectionSortWithSteps(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;
		if (minIndex != i)
			swap(arr[i], arr[minIndex]);
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

void SelectionSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;
		if (minIndex != i)
			swap(arr[i], arr[minIndex]);
	}
}

void MaxHeapify(int arr[], int size , int index)
{
	int l = index * 2 + 1;
	int r = index * 2 + 2;
	int largest = index;
	if (l<size && arr[l]>arr[largest])
		largest = l;
	if (r<size && arr[r]>arr[largest])
		largest = r;
	if (largest != index)
	{
		swap(arr[index], arr[largest]);
		MaxHeapify(arr, size, largest);
	}
}

void HeapSortWithSteps(int arr[], int size)
{
	// buliding the heap
	for (int i = size/2 -1; i >= 0; i--)
		MaxHeapify(arr, size, i);
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	for (int i = size-1; i >= 0; i--)
	{
		swap(arr[i], arr[0]);
		MaxHeapify(arr, i, 0);
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

void HeapSort(int arr[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		MaxHeapify(arr, size, i);
	for (int i = size - 1; i >= 0; i--)
	{
		swap(arr[i], arr[0]);
		MaxHeapify(arr, i, 0);
	}
}

void InsertionSortWithSteps(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	for (int i = 1; i < size; i++)
	{
		int cur = i - 1;
		int t = i;
		while (cur >= 0 && arr[t] < arr[cur])
		{
			swap(arr[t], arr[cur]);
			t--;
			cur--;
		}
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}

void InsertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int cur = i - 1;
		int t = i;
		while (cur >= 0 && arr[t] < arr[cur])
		{
			swap(arr[t], arr[cur]);
			t--;
			cur--;
		}
	}
}