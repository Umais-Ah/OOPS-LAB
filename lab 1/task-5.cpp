#include <iostream>
using namespace std;

void verify(char arr[], char ans[])
{

	int correct = 0;
	int incorrect = 0;

	for (int i = 0; i < 20; i++)
	{
		cout << "Enter Answer for option " << i + 1 << " from (A-D) :";
		cin >> ans[i];
		if (ans[i] < 'A' || ans[i] > 'D')
		{
			cout << "invald option" << endl;
			i--;
		}
		if (ans[i] == arr[i])
		{
			correct++;
		}
		else
		{
			incorrect++;
		}
	}
	cout << endl
		 << "total correctly answered questions " << correct << endl;
	cout << "total correctly answered questions " << incorrect << endl;
	cout << "list of incorrectly answered questions are " << endl;
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] != ans[i])
		{
			cout << i << endl;
		}
	}
}

int main()
{
	char arr[20] = {'A', 'B', 'A', 'C', 'D', 'A', 'C', 'C', 'B', 'B', 'D', 'A', 'B', 'C', 'B', 'D', 'C', 'D', 'D', 'B'};
	char ans[20];

	verify(arr, ans);
}
