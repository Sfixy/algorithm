#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

const int N = 10; //数据范围是9 

// 全局变量初始值是0
// 局部变量初值是随机值 
int n;
int state[N]; //每个位置的状态 0表示还没放数，1~n表示放了那个数 
bool used[N];  // 每个数有没有被用过 true表示用过，false表示还没有用过 

void dfs(int u)
{
	if(u > n) //边界 （枚举完最后一位了） 
	{
		for(int i = 1; i <= n ;i++) printf("%d ",state[i]);  //打印方案 
		puts("");
		
		return;
	}
	
	//依次枚举每个分支，即当前位置可以填哪些数 
	for (int i = 1; i <= n ;i++)
	{
		if(!used[i])
		{
			state[u] = i;
			used[i] = true;
			dfs(u+1);
			
			//恢复现场 
			state[u] = 0;
			used[i] = false; 
		}
	 } 
	
}

int main()
{
	scanf("%d",&n);
	
	dfs(1);//表示当前枚举到第一位了 
	
	return 0;
}
