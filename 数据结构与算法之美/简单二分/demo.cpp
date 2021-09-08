#include<iostream>

using namespace std;

const int N = 100010;
int a[N];

int bsearch(int *a, int n, int value)
{
	int low = 0;
	int height = n - 1;

	while (low <= height)
	{
		int mid = (low + height) / 2;

		if (a[mid] == value) return mid;

		if (a[mid] > value) height = mid - 1;
		else if (a[mid] < value) low = mid + 1;	

	}

	return -1;
}

int main()
{
	int n;

	printf("输入数组大小：");
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("输入要查找的值：");
	int value;
	cin >> value;

	int res = bsearch(a, n, value);

	if (-1 == res) printf("没查找到");
	else printf("结果为：%d", res);

	return 0;
}