//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<vector> 
//
//using namespace std;
//©Лее 
//int main()
//{
//	
//    vector<long> v;
//	
//	for(int i = 0;i < 3;i++)
//	{
//		long a;
//		cin >> a;
//		v.push_back(a);
//	}
//	
//	long left = 0;
//	long right = 2;
//	long temp = v[left];
//	long i = left;
//	long j = right;
//	while(i != j)
//	{
//		while(v[j] >= temp && i < j) j--;
//		while(v[i] <= temp && i < j) i++;
//		
//		if(i < j)
//		{
//			temp = v[i];
//			
//			v[i] = v[j];
//			v[j] = temp;
//		} 
//	}
//	v[left] = v[i];
//	v[i] = temp;
//	
//	for(int x = 0; x < 2; x++)
//	{
//		cout << v[x] << "->";
//	}
//	cout << v[2];
//	
//    return 0;
//}

#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (c < b) swap(c,b);
	if (c < a) swap(c,a);
	if (a > b) swap(a,b);
	cout << a << "->" << b << "->" << c;
	
	return 0;
}
