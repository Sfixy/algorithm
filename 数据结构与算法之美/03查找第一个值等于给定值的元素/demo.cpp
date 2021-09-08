#include<iostream>

using namespace std;

const int N = 100010;
int arr[N];

int bsearch(int* arr, int n, int value)
{
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + (high - low) >> 1);
		if (arr[mid] == value) return mid;
		else if (arr[mid] > value) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}

int main()
{
	int n;
	printf("输入数组的大小：");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int value;
	cin >> value;

	int res = bsearch(arr, n, value);

	if (-1 == res) printf("没查到");
	else printf("结果为：%d", res);

	return 0;
}