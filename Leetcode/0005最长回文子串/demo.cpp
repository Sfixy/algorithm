#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

string longestPalindrome(string s)
{
	string res;

	for (int i = 0; i < s.size(); i++)
	{
		//s������
		int l = i - 1, r = i + 1;
		while (l >= 0 && r < s.size() && s[l] == s[r]) l--, r ++ ;
		// subset��l�ǿ�ʼλ�ã�r-l-1�ǻ�ȡ�ִ��ĳ���
		if (res.size() < r - l - 1) res = s.substr(l, r - l - 1);

		//s��ż��
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