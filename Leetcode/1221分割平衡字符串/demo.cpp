#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int split(string s)
{
	int ans = 0;
	int d = 0;
	for (char ch : s)
	{
		ch == 'L' ? d++ : d--;
		if (d == 0) ans++;
	}
	return ans;
}

int main()
{
	string s;
	cin >> s;
	int ans = split(s);
	cout << ans << endl;
	return 0;
}