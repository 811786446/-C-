//给定一个棋盘的长宽 n,m。 从左上角往右上角走，每次只能向右或者向下，判断有多少种走法

#include <iostream>
using namespace std;

int PathNum(int n, int m)
{
	if (n > 1 && m > 1)
		return PathNum(n - 1, m) + PathNum(n, m - 1);
	else if (n == 1 || m == 1)
		return n + m;
	else
		return 0;
}

int main()
{
	int n, m;
	while (cin >> n >> m)
		cout << PathNum(n, m) << endl;
	return 0;
}