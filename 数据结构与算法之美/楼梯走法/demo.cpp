#include<iostream>
#include<algorithm>

using namespace std;

int n;

int f(int n)
{
	if (1 == n) return 1;
	if (2 == n) return 2;
	return f(n - 1) + f(n - 2);
}

int main()
{
	cin >> n;
	int res = f(n);

	cout << res << endl;
	return 0;
}