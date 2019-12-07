#if 0

#include<iostream>
using namespace std;

int main()
{
	int n;
	int max = 0;
	int tmp = 0;
	while (cin >> n)
	{
		int nums[n];
		max = nums[0];
		tmp = 0;
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> nums[i];
			if (flag == 0)
			{
				max = nums[i];
				flag = 1;
			}
			tmp += nums[i];
			if (tmp > max)
				max = tmp;
			if (tmp < 0)
				tmp = 0;
		}
		cout << max << endl;
	}
	return 0;
}

#endif