#include<iostream>
using namespace std;

long n;
int x;

int reverse(int x)
{
	while (x != 0)
	{
		n = n * 10 + x % 10;
		x /= 10;
	}

	return (int)n == n ? (int)n : 0;
}

int main()
{
	cin >> x;
	cout << reverse(x) << endl;
	return 0;
}