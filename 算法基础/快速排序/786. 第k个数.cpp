//#include<iostream>
//
//using namespace std;
//
//const int N = 100000;
//int q[N];
//int n;
//int k;
//
//void quick_sort(int q[], int l, int r)
//{
//	int x = q[(l + r) / 2], i = l - 1, j = r + 1;
//	
//	if(l >= r) return;
//	
//	while(i < j)
//	{
//		do i++; while(q[i] < x);
//		do j--; while(q[j] > x);
//		if(i < j) swap(q[i],q[j]);	
//	}
//	
//	
//	quick_sort(q,l,j);
//	quick_sort(q,j+1,r);
//}
//
//int main()
//{
//	cin >> n >> k;
//	for(int i = 0; i < n; i++) scanf("%d",&q[i]);
//	quick_sort(q, 0, n-1);
////	for(int i = 0; i< n; i++) printf("%d ",q[i]);
//	
//	cout << q[k - 1];
//	
//}

//c++里面局部变量和全局变量重名得话优先使用局部变量
#include<iostream>

using namespace std;

const int N = 100010;
int n;
int k;
int q[N];

int quick_sort(int l,int r,int k)
{
	int x = q[(l + r) / 2], i = l - 1, j = r + 1;
	
	if ( l == r ) return q[l];
	
	while(i < j)
	{
		while(q[ ++i] < x);
		while(q[ -- j] > x);
		
		if(i < j) swap(q[i],q[j]);
	}
	
	int sl = j - l + 1;
	if(k <= sl) return quick_sort(l,j,k);
	
	return quick_sort(j+1,r,k-sl);
}

int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++) scanf("%d",&q[i]);
	cout << quick_sort(0 , n - 1 , k);
}
 
