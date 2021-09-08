#include<iostream>
#include<algorithm>

using namespace std;

int n;

int f(int n)
{
	if (1 == n) return 1;
	return f(n - 1) + 1;
}

int main()
{
	cin >> n;
	int res = f(n);
	cout << res << endl;
	return 0;
}