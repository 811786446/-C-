
//�������һ��ż����ӽ�����������
//����һ��ż��(����2)��������2��������ɣ�Ҫ��������ָ��ż��������������ֵ��С�������ԡ�


//����˼·��
//�������ż��num������������ɣ���ô����������һ����һ����num��һ�����һ����num��һ��С��������
//ֻҪ��num/2 ��ʼ�������ҵ������������������ĿҪ��������ԡ�

#include<iostream>
using namespace std;

int isPrime(int tmp)
{
	//�����tmp����С�������������Ļ��� ��tmp�������������������
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
	//ѭ����������
	while (cin >> num)
	{
		//���������ж�
		if (num % 2 != 0)
			break;
		int half_num = num / 2;
		for (int i = half_num; i > 0; i--)
		{
			//���м�������һ����һ������������
			if (isPrime(i) && isPrime(num - i))
			{
				cout << i << endl << num - i << endl;
				break;
			}
		}

	}

	return 0;
}