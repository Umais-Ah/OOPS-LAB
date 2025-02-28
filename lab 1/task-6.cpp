#include <iostream>
using namespace std;

void average(int arr[])
{

	int sum;

	for (int i = 0; i < 7; i++)
	{
		sum += arr[i];
	}

	float average = (float)sum / 5;
	cout << "average is : " << average << endl;
}

void highlow(int arr[])
{
	int max = arr[0];
	for (int i = 0; i < 7; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	int min = arr[0];
	for (int i = 0; i < 7; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << "maximum temperature recorded is :" << max << endl;
	cout << "minimum temperature recorded is :" << min << endl;
}

void count(int arr[7])
{
	int cnt = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] < 10 || arr[i] > 30)
		{
			cnt++;
		}
	}
	cout << "number of days greater than 30 and less than 10 are : " << cnt << endl;
}

int main()
{
	int arr[7];
	for (int i = 0; i < 7; i++)
	{
		cout << "enter temperature for day" << i + 1 << " : ";
		cin >> arr[i];
	}

	average(arr);
	highlow(arr);
	count(arr);
}
