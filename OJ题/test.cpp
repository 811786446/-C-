//�� 1+2+3.......+n��Ҫ����ʹ�ó˳�����for, while, if, else, switch, case �ȹؼ��ּ������ж����
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
		//�ɱ����飬C++14���﷨���еı���������֧�֡�
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