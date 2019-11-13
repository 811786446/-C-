//给定一个数，每次只能对这个数+1或者-1，求多少步后可以成为斐波那契数列中的某一个数
#if 0
#include<iostream>
using namespace std;

int min(int a, int b)
{
	if (a <= b)
		return a;
	else
		return b;
}

int main()
{
	int N = 0;
	int f = 0, f1 = 0, f2 = 1;
	int a = 0, b = 0;
	while (cin >> N)
	{
		while (1)
		{
			//因为第一个fib数 0， 和第二个 1 的步数相同都是0，中间没有间隔所以不用判断
			f = f1 + f2;
			f1 = f2;
			f2 = f;
			//判断N在相邻的两个fib数中间离哪个近
			if (N > f)
				a = N - f;
			if (N <= f)
			{
				b = f - N;
				break;
			}
		}
		cout << min(a, b) << endl;
	}
	return 0;
}
#endif