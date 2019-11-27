//三个空瓶子换一瓶，两个的时候可以问老板借一个瓶子，之后一起三个还回去。
//问输入n个空瓶，能喝到多少瓶

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