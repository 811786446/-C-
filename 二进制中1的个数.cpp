#if 0
#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	while (cin >> num)
	{
		if (num == 0)
		{
			cout << 0 << endl;
			continue;
		}
		else
		{
			int count = 0;
			for (int i = 0; i < 32; i++)
			{
				if ((num & 1) == 1)
					count++;
				num >>= 1;
			}
			cout << count << endl;
		}

	}

	return 0;
}
#endif