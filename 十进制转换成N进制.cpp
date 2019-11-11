//给定一个十进制数M，以及需要转换的进制N。将十进制转换成N进制

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#if 0

#include<stdio.h>
#include<stack>
using namespace std;

string fun(int m, int n, string s)
{
	stack<char> tmp;
	if (m == 0)
		s = '0';
	while (m != 0)
	{
		char a = 0;
		if (m % n > 9)
			a = (m % n) - 10 + 'A';
		else
			a = (m % n) + '0';
		tmp.push(a);
		m = m / n;
	}
	while (!tmp.empty())
	{
		s += tmp.top();
		tmp.pop();
	}
	return s;
}

int main()
{
	int M = 0;
	int N = 0;
	string ret;
	scanf("%d%d", &M, &N);
	if (N < 2 || N > 16)
		return 0;
	ret = fun(M, N, ret);
	cout << ret << endl;

	return 0;
}

#endif