//������ƿ�ӻ�һƿ��������ʱ��������ϰ��һ��ƿ�ӣ�֮��һ����������ȥ��
//������n����ƿ���ܺȵ�����ƿ

#if 0
#include<iostream>
using namespace std;

int main()
{

	int n_num = 0;
	int f_num = 0;
	int count = 0;
	while (cin >> n_num)
	{
		while (n_num)
		{
			f_num = 0;
			if (n_num > 3)
			{
				f_num = (n_num / 3);
				count += f_num;
				n_num = n_num % 3 + f_num;
			}
			else if (n_num == 3)
			{
				count += 1;
				n_num = 0;
			}
		}
		cout << count << endl;
	}

	return 0;
}






///


#include<iostream>
using namespace std;

int main()
{

	int n_num = 0;

	while (cin >> n_num && n_num != 0)
	{

		cout << (n_num / 2) << endl;
	}

	return 0;
}
#endif