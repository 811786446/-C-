//����һ������ÿ��ֻ�ܶ������+1����-1������ٲ�����Գ�Ϊ쳲����������е�ĳһ����
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
			//��Ϊ��һ��fib�� 0�� �͵ڶ��� 1 �Ĳ�����ͬ����0���м�û�м�����Բ����ж�
			f = f1 + f2;
			f1 = f2;
			f2 = f;
			//�ж�N�����ڵ�����fib���м����ĸ���
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