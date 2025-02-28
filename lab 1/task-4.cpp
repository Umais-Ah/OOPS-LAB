// A local zoo wants to keep track of how many pounds of food each of its three monkeys eats each
// day during a typical week. Write a program that stores this information in a two-dimensional 3 �
// 5 array, where each row represents a different monkey and each column represents a different
// day of the week. The program should first have the user input the data for each monkey. Then it
// should create a report that includes the following information:
// � Average amount of food eaten per day by the whole family of monkeys.
// � The least amount of food eaten during the week by any one monkey.
// � The greatest amount of food eaten during the week by any one monkey.
// Input Validation: Do not accept negative numbers for pounds of food eaten

#include <iostream>
using namespace std;

void average(int data[3][5])
{
	int total[5] = {0};
	float average[5] = {0};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			total[i] += data[j][i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		average[i] = (float)total[i] / 3;
		cout << "average for day " << i + 1 << " :" << average[i] << endl;
	}
}

void least(int data[3][5])
{
	int min = data[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (min > data[i][j])
			{
				min = data[i][j];
			}
		}
	}
	cout << "least amount of food eaten by monkey during the week is :" << min << endl;
}

void max(int data[3][5])
{
	int max = data[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (max < data[i][j])
			{
				max = data[i][j];
			}
		}
	}
	cout << "max amount of food eaten by monkey during the week is :" << max << endl;
}

int main()
{
	int data[3][5] = {0};

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter data for Monkey " << i + 1 << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "day " << j + 1 << " :";
			cin >> data[i][j];
		}
	}

	average(data);
	least(data);
	max(data);
}
