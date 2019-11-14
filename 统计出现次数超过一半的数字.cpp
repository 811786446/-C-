#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//【数组中出现次数超过一半的数字】数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
//例如输入一个长度为9的数组{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }。由于数 字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0


//方法一、把数组排序之后，出现次数超过一半的数一定是它中间那个数。
class Solution{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		int i = 0;
		int count = 0;
		if (numbers.empty())
			return 0;
		sort(numbers.begin(), numbers.end());
		//因为又可能不存在这个数，所以需要判断这个数出现的次数有没有超过一半
		int ret = numbers[numbers.size() / 2];
		for (i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == ret)
				count++;
		}
		return (count > (numbers.size() / 2)) ? ret : 0;
	}
};

//方法二、使用两个数，一个num表示正在检查的数字，另一个count表示这个数字出现的次数默认为1。
//遍历整个数组，如果是这个数字等于num则count++，否则--；如果count == 0 就使num等于下一个数字
//遍历结束后，最后保留count不等于0的一定就是出现次数最多的数字，再进行判断
class Solution{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		if (numbers.empty())
			return 0;
		if (numbers.size() == 1)
			return numbers[0];
		int num = numbers[0];
		int count = 1;
		//这里必须从第二个开始记，否则numbers[0]会多算一次
		for (int i = i; i < numbers.size(); i++)
		{
			if (num == numbers[i])
				count++;
			else
				count--;
			if (count == 0)
			{
				num = numbers[i];
				count = 1;
			}
		}
		count = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == num)
			{
				count++;
			}
		}
		return count > (numbers.size() / 2) ? num : 0;
	}
};