#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int n, target;
vector<int> nums;


vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> heap;
	for (int i = 0; i < nums.size(); i++)
	{
		int r = target - nums[i];
		if (heap.count(r)) return { heap[r],i };
		heap[nums[i]] = i;
	}
	return {};
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		nums.push_back(x);
	}
	cin >> target;
	for (int x : twoSum(nums, target)) cout << x << ' ';
	

	return 0;
}