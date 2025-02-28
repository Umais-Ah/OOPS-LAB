#include <iostream>
using namespace std;

void print(int arr[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << "store " << i << " :";
		for (int j = 0; j < arr[i] / 100; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter today's sales for store " << i + 1 << ":";
		cin >> arr[i];
	}

	print(arr);
}
