//��һ��byte���ֶ�Ӧ�Ķ�����������1�������������

#if 0

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0, maxsize = 0;
		while (n)
		{
			if (n & 1 == 1)
			{
				count++;
				maxsize = (maxsize > count) ? maxsize : count;
			}
			else
				count = 0;
			n = n >> 1;
		}

		cout << maxsize << endl;
	}
	return 0;
}




//��һ���������������������㰴�ո��ڵ�һ��һ��ش������Ҳ����α�ţ����ڵ���Ϊ1.�����������a�� b���뷵��a��b������������ȱ��
class LCA {
public:
	int getLCA(int a, int b) {
		// write code here

		while (a != b)
		{
			if (a > b)
				a /= 2;
			else
				b /= 2;
		}
		return a;
	}

};

#endif