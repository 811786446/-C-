//����һ�����̵ĳ��� n,m�� �����Ͻ������Ͻ��ߣ�ÿ��ֻ�����һ������£��ж��ж������߷�

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