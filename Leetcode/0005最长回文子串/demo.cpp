#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

string longestPalindrome(string s)
{
	string res;

	for (int i = 0; i < s.size(); i++)
	{
		//s是奇数
		int l = i - 1, r = i + 1;
		while (l >= 0 && r < s.size() && s[l] == s[r]) l--, r ++ ;
		// subset的l是开始位置，r-l-1是获取字串的长度
		if (res.size() < r - l - 1) res = s.substr(l, r - l - 1);

		//s是偶数
		l = i, r = i + 1;
		while (l >= 0 && r < s.size() && s[l] == s[r]) l--, r++;
		if (res.size() < r - l - 1) res = s.substr(l, r - l - 1);
	}

	return res;
}

int main()
{
	string s;
	cin >> s;
	string res = longestPalindrome(s);
	cout << res << endl;
	return 0;
}