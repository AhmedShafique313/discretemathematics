#include <iostream>
#include <vector>

using namespace std;

void printPrime(int n)
{
	vector<int> nums(n, 1);

	for (int i = 2; i < n; i++)
	{
		for (int j = i * i; j < n; j += i)
		{
			nums[j - 1] = 0;
		}
	}

	for (int i = 1; i < n; i++)
	{
		if (nums[i - 1] == 1)
		{
			cout << i << " ";
		}
	}
}

int main()
{
	int n;
	cout << "Enter the value of n" << endl;

	cin >> n;

	printPrime(n);

	return 0;
}
