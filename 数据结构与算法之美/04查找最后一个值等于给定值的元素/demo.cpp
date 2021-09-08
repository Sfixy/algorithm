#include<iostream>

using namespace std;

const int N = 100010;
int arr[N];

int bsearch(int* a, int n, int value)
{
	int low = 0;
	int height = n - 1;
	while (low < height)
	{
		int mid = low + ((height - low) >> 1);
		if (arr[mid] < value) low = mid + 1;
		else if (arr[mid] > value) height = mid - 1;
		else {
			if (mid == n - 1 || (arr[mid + 1] != value)) return mid;
			else low = mid + 1;
		}
	}
}

int main()
{
	int n;
	printf("��������ô�С��");
	cin >> n;

	printf("��������:\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	int value;
	printf("�������ֵ��");
	cin >> value;
	int res = bsearch(arr,n,value);

	cout << res;

	return 0;
}