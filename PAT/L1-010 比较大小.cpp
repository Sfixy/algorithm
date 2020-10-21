#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

void swap(int &x,int &y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	
    int a,b,c;
	cin >> a >> b >> c;
	if(a > b)
	{
		swap(a,b);
	}
	cout << a << "->" << b << "->" << c;
    return 0;
}
