#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;

int n;

void push(vector<int> &arr, int val, int &count)
{
	if (n == count)
	{
		printf("Õ»Âú");
		return;
	}
	arr.push_back(val);
	count++;
}

void pop(vector<int>& arr)
{
	arr.pop_back();
}


int main()
{
	vector<int> arr;
	int count = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		arr.push_back(i);
		//count++;
	}



	push(arr, 666, count);

	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << endl;
	}

	pop(arr);

	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << (*it) << endl;
	}


	return 0;
}