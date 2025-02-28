// Write a function named coinToss that simulates the tossing of a coin. When you call the
// function, it should generate a random number in the range of 1 through 2. If the random number
// is 1, the function should display �heads.� If the random number is 2, the function should display
// �tails.� Demonstrate the function in a program that asks the user how many times the coin should
// be tossed and then simulates the tossing of the coin that number of times.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void coinToss(int n)
{

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++)
	{

		int random = rand() % 2 + 1;

		if (random == 1)
		{
			cout << "head" << endl;
		}
		else
		{
			cout << "tail" << endl;
		}
	}
}

int main()
{
	int n;
	cout << "how many time you want to toss :";
	cin >> n;

	coinToss(n);
}
