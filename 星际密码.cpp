
//星际战争开展了100年之后，NowCoder终于破译了外星人的密码！他们的密码是一串整数，通过一张表里的信息映射成最终4位密码。
//表的规则是：n对应的值是矩阵X的n次方的左上角，如果这个数不足4位则用0填充，如果大于4位的则只输出最后4位。
//| 1 1 | ^n = > | Xn .. |
//| 1 0 | | .. .. |
//例如n = 2时，
//| 1 1 | ^ 2 = > | 1 1 | *| 1 1 | = > | 2 1 |
//| 1 0 | | 1 0 | | 1 0 | | 1 1 |
//即2对应的数是“0002”。

#if 0

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n, fib[10001], i, x; fib[0] = 1; fib[1] = 1;
	for (i = 2; i<10001; i++) 
		fib[i] = (fib[i - 1] % 10000 + fib[i - 2] % 10000) % 10000;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> x; 
			printf("%04d", fib[x]);
		}
		printf("\n");
	}
	return 0;
}

#endif