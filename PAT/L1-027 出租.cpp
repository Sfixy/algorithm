#include<iostream>
#include<cstring>

using namespace std;

string temp;

void quicksort(int left,int right)
{
	if(left > right)
	{
		return;
	}
	char t = temp[left];
	cout << t << endl;
	int x = left;
	int y = right;
	while(x != y)
	{
		while(temp[y] <= t && x < y) y--;
		while(temp[x] >= t && x < y) x++;
		if(x < y)
		{
			t = temp[x];
			temp[x] = temp[y];
			temp[y] = t;
		}
	}
	temp[left] = temp[x];
	temp[x] = t;
	
	cout << temp[x] << endl;
	puts("");
	
	quicksort(left,x-1);
	quicksort(x+1,right);
}

int main()
{
	string s1 = "int[] arr = new int[]{";
	string s2 = "int[] index = new int[]{";
	string s;
	
	cin >> s;
	for(int i = 0; i < s.size(); i++)
	{
		
		if(temp.find(s[i]) == string::npos) 
		{ 
			temp += s[i];
		}
	}
	cout << temp << endl;
	quicksort(0,temp.size() - 1);
	cout << temp;
	return 0;
}
