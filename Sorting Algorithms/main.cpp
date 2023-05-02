#include<iostream>
#include"SortingAlgorithms.h"
using namespace std;
int main()
{
	int arr[] = { 57, 23, 91, 5, 16, 74, 33, 68, 89, 2, 74, 12, 78, 29, 61 };
	InsertionSortWithSteps(arr, 15);
	for (auto i : arr)
		cout << i << " ";
}