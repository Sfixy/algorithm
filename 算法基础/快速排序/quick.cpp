#include<iostream>
#include<cstring>

using namespace std;

const int N = 1e6 + 10;
int n;
int q[N]; 
//������������scanf�������� 

//����ģ�� 
void quick_sort(int q[],int l,int r)
{
	int x = q[(r + l) / 2], i = l - 1, j = r + 1; //xȡֵ������ģ�Ҳ����ѡ���е㡣i��jָ�������ı߽� ���е���� 
	if(l >= r) return;
	while(i < j)
	{
		do i++; while(q[i] < x);
		do j--; while(q[j] > x);
		if(i < j) swap(q[i],q[j]);
	 } 
	 
	 quick_sort(q,l,j);
	 quick_sort(q,j + 1,r);
}

int main()
{
	scanf("%d",&n);
	for(int i = 0; i < n; i++) scanf("%d", &q[i]);
//	for(int i = 0; i < n; i++) printf("%d ", q[i]);
	quick_sort(q,0,n-1);
	for(int i = 0; i < n; i++) printf("%d ", q[i]);
	return 0;
}
