#include<iostream>
using namespace std;

int head, tail;
const int N = 100010;
int arr[N];
int n;

// ����
void enqueue()
{
	if (head == n)
	{
		printf("�ӿ�");
		return;
	}
	int val = arr[head];
	head++;
	printf("����Ԫ��Ϊ��%d\n", val);

}

//���
void dequeue(int val)
{
	if (tail == n)
	{
		printf("����");
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