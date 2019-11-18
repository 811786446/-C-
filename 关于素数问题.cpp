
//查找组成一个偶数最接近的两个素数
//任意一个偶数(大于2)都可以由2个素数组成，要求输出组成指定偶数的两个素数差值最小的素数对。


//解题思路：
//首先这个偶数num由两个素数组成，那么这两个素数一定是一个比num的一半大，另一个比num的一半小的两个数
//只要从num/2 开始向两边找到最近的素数，就是题目要求的素数对。

#include<iostream>
using namespace std;

int isPrime(int tmp)
{
	//如果比tmp开方小的数不能整除的话， 比tmp开方大的数更不能整除
	for (int i = 2; i*i <= tmp; i++)
	{
		if (tmp % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int num;
	//循环输入问题
	while (cin >> num)
	{
		//错误输入判断
		if (num % 2 != 0)
			break;
		int half_num = num / 2;
		for (int i = half_num; i > 0; i--)
		{
			//由中间向两边一个数一个数查找素数
			if (isPrime(i) && isPrime(num - i))
			{
				cout << i << endl << num - i << endl;
				break;
			}
		}

	}

	return 0;
}