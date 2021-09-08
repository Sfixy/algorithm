#include<iostream>
using namespace std;

int head, tail;
const int N = 100010;
int arr[N];
int n;

// 出队
void enqueue()
{
	if (head == n)
	{
		printf("队空");
		return;
	}
	int val = arr[head];
	head++;
	printf("出队元素为：%d\n", val);

}

//入队
void dequeue(int val)
{
	if (tail == n)
	{
		printf("队满");
		return;
	}
	arr[tail++] = val;
}

int main()
{
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		dequeue(i);
		cout << arr[i] << endl;
		enqueue();
	}

	return 0;
}