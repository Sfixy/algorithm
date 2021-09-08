#include<iostream>
#include<algorithm>

using namespace std;

const int N = 100010;
int n;
int arr[N];

void bubbleSort(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		bool flag = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			
			if (arr[j] < arr[j + 1])
			{
				flag = true;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (!flag) return;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bubbleSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}