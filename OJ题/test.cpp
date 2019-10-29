//求 1+2+3.......+n，要求不能使用乘除法，for, while, if, else, switch, case 等关键字及条件判断语句
#include<iostream>
using namespace std;

class Solution{
public:
	class Sum
	{
	public:
		Sum()
		{
			_sum += _i;
			++_i;
		}
	};

	int Sum_Solution(int n)
	{
		_i = 1;
		_sum = 0;
		//可变数组，C++14新语法，有的编译器不能支持。
		Sum arr[n];
		return _sum;
	}
private:
	static int _sum;
	static int _i;

};


int Solution::_sum = 0;
int Solution::_i = 1;
int main()
{
	Solution ret;
	ret.Sum_Solution(100);
	return 0;
}