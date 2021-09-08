#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

int n;
unordered_map<int, int> dict;

int f(int n)
{
	if (1 == n) return 1;
	if (2 == n) return 2;

	unordered_map<int, int>::iterator iter;
	if ((iter = dict.find(n)) != dict.end()) return iter->second;

	int res = f(n - 1) + f(n - 2);
	dict[n] = res;
	return res;
}


int main()
{
	cin >> n;
	int res = f(n);
	cout << res << endl;

	return 0;
}