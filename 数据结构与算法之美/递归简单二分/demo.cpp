#include<iostream>

using namespace std;

const int N = 100010;
int a[N];

int bsearchInternally(int* a, int low, int high, int value)
{
	if (low > high) return -1;


	int mid = low + ((high - low) >> 1);
	if (a[mid] < value) return bsearchInternally(a, mid + 1, high, value);
	else if (a[mid] > value) return bsearchInternally(a, low, mid - 1, value);
	else return mid;
}

int bsearch(int* a, int low, int high, int value)
{
	return bsearchInternally(a, low, high, value);
}


int main()
{
	int n;

	printf("���������С��");
	cin >> n;

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	int value;
	cin >> value;

	int res = bsearch(a, 0, n - 1, value);

	if (-1 == res) printf("û����");
	else printf("���Ϊ��%d", res);

	return 0;
}