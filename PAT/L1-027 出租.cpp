#include<iostream>
#include<cstring>
#include<sstream>

using namespace std;

string temp;

//����ģ��
void quick_sort(int l,int r)
{
	int x = temp[(l + r) / 2], i = l - 1, j = r + 1; //xȡֵ������ģ�Ҳ����ѡ���е㡣i��jָ�������ı߽� 
	if(l >= r) return;
	while(i < j)
	{
		do i++; while(temp[i] > x);
		do j--; while(temp[j] < x);
		if(i < j) swap(temp[i],temp[j]);
	 } 
	 
	 quick_sort(l,j);
	 quick_sort(j + 1,r);
}

string to_string(int j)
{
	stringstream ss;
	ss << j;
	string s = ss.str();
	return s.c_str();
}

int main()
{
	string s1 = "int[] arr = new int[]{";
	string s2 = "int[] index = new int[]{";
	string s;
	
	cin >> s;
	for(unsigned int i = 0; i < s.size(); i++)
	{
		
		if(temp.find(s[i]) == string::npos) 
		{ 
			temp += s[i];
		}
	}
	quick_sort(0,temp.size() - 1);
	for(unsigned int i = 0; i < temp.size() - 1; i++)
	{
		s1 = s1 + temp[i] + ',';
	}
	s1 = s1 + temp[temp.size() - 1] + "};";
	cout << s1 << endl;
	
	for(unsigned int i = 0; i < s.size(); i++)
	{
		for(unsigned int j = 0; j < temp.size(); j++)
		{
			if(s[i] == temp[j] && i != s.size() - 1) 
			{
				string k = to_string(j);
				s2 = s2 + k + ",";
			}
			
			if(s[i] == temp[j] && i == s.size() - 1) 
			{
				string k = to_string(j);
				s2 = s2 + k + "};";
			}
		}
	}
	cout << s2;
	return 0;
}
