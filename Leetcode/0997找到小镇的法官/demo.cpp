#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int cnt[5];
	memset(cnt, 0, sizeof(int) * (5));
	for (int i = 0; i < 5; i++)
	{
		cout << cnt[i] << ' ';
	}
	return 0;
}