//一个数组有N个元素，求连续子数组的最大和，
#if 0
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> nums;
	int n;
	int max = 0;
	int tmp = 0;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> max;
			nums.push_back(max);
		}
		if (nums.size() == 1)
			cout << nums[0];

		max = nums[0];
		tmp = 0;
		for (int i = 0; i < n; i++)
		{
			if (max > 0)
			{
				if (tmp > max)
					max = tmp;
			}
			tmp = (nums[i] >= 0 ? tmp + nums[i] : 0);
		}
		cout << max << endl;
	}
	return 0;
}
#endif







//改进版


#if 0

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int size;
	cin >> size;
	vector<int> nums(size);
	for (size_t i = 0; i < size; ++i)
		cin >> nums[i];
	int result = nums[0];
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < nums.size(); i++)  
	{   
		sum2 = sum1 >= 0 ? sum1 + nums[i] : nums[i];
		if (sum2 > result)
			result = sum2;
		if (sum2 < 0)
			sum2 = 0;
		sum1 = sum2;
	}
	cout << result << endl;
	return 0;
}
#endif