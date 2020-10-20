#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int a = 0;
	int b = 1;
	int n;
	cin >> n;
	
	for(int i = 1; i <= n ;i++)
	{
		cout << a << ' ';
		int fn = a + b;
		a = b,b=fn;
	}
	return 0;
}
