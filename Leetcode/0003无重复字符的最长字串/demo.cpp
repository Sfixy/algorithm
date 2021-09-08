#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

int lengthOfLongestSubstring(string s)
{
	unordered_map<char, int> heap;
	int res = 0;
	for (int i = 0, j = 0; i < s.size(); i++)
	{
		heap[s[i]]++;
		while (heap[s[i]] > 1) heap[s[j++]]--;
		res = max(res, i - j + 1);
	}
	return res;
}

int main()
{
	string s;
	cin >> s;
	int res = lengthOfLongestSubstring(s);
	cout << res << endl;
	return 0;
}