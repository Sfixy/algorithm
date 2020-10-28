#include<iostream>
#include<cstring>

using namespace std;

const int N = 1e6 + 10;
int n;
int q[N]; 
//数据量大建议用scanf读入数据 

//快排模板 
void quick_sort(int q[],int l,int r)
{
	int x = q[(r + l) / 2], i = l - 1, j = r + 1; //x取值是任意的，也可以选择中点。i，j指向真正的边界 。中点最快 
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
