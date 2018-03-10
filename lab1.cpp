#include<iostream>
using namespace std;

int main()
{
	int n;

	cout << "Please enter an integer:";
	cin >> n;
	cout << "The result of your input:" << endl;
	cout << n << ' ';

	for(;n > 1;)
	{
		if(n % 2 == 1)
		{
			n = 3 * n + 1;
		}

		else
		{
			n /= 2;
		}

		cout << n << ' ';
	}
}
