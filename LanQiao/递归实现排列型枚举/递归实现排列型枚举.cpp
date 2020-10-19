#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

const int N = 10; //���ݷ�Χ��9 

// ȫ�ֱ�����ʼֵ��0
// �ֲ�������ֵ�����ֵ 
int n;
int state[N]; //ÿ��λ�õ�״̬ 0��ʾ��û������1~n��ʾ�����Ǹ��� 
bool used[N];  // ÿ������û�б��ù� true��ʾ�ù���false��ʾ��û���ù� 

void dfs(int u)
{
	if(u > n) //�߽� ��ö�������һλ�ˣ� 
	{
		for(int i = 1; i <= n ;i++) printf("%d ",state[i]);  //��ӡ���� 
		puts("");
		
		return;
	}
	
	//����ö��ÿ����֧������ǰλ�ÿ�������Щ�� 
	for (int i = 1; i <= n ;i++)
	{
		if(!used[i])
		{
			state[u] = i;
			used[i] = true;
			dfs(u+1);
			
			//�ָ��ֳ� 
			state[u] = 0;
			used[i] = false; 
		}
	 } 
	
}

int main()
{
	scanf("%d",&n);
	
	dfs(1);//��ʾ��ǰö�ٵ���һλ�� 
	
	return 0;
}
