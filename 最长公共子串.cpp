//两个字符串中最长公共子串

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1;
	string str2;
	while (cin >> str1 >> str2)
	{
		string tmp;
		string max;
		if (str1.size() > str2.size())
			swap(str1, str2);
		for (int i = 0; i < str1.size(); i++)
		{
			for (int j = 0; j < str2.size(); j++)
			{
				int n = i;
				//此处应该用while而不是if
				while (str1[n] == str2[j])
				{
					tmp += str1[n];
					n++;
					j++;
				}
				if (tmp.size() > max.size())
				{
					max = tmp;
				}
				tmp.clear();
			}
		}
		cout << max << endl;
	}

	return 0;
}