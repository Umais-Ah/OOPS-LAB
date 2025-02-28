// Write a function that accepts three arguments: an array, the size of the array, and a number n.
// Assume that the array contains integers. The function should display all of the numbers in the
// array that are greater than the number n.
#include <iostream>
using namespace std;

void print(int arr[], int n, int size)
{

	for (int i = 0; i < size; i++)
	{
		if (n < arr[i])
		{
			cout << arr[i] << endl;
		}
	}
}

int main()
{
	int size, n;
	cout << "enter number of integer for an array :";
	cin >> size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " number ";
		cin >> arr[i];
		cout << endl;
	}

	cout << "enter number n ";
	cin >> n;

	print(arr, n, size);
}
