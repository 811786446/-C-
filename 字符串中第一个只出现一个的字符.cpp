
int firstUniqChar(string s) {


	unordered_map<char, int> m;
	for (const auto &c : s)
		++m[c];

	for (int i = 0; i < s.size(); i++)
	{
		if (m[s[i]] == 1)
			return i;
	}

	return -1;

}







#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	string str;
	unordered_map<char, int> vec;
	int flag = 0;
	while (cin >> str)
	{
		for (int i = 0; i < str.size(); i++)
		{
			vec[str[i]]++;
		}
		for (int i = 0; i < str.size(); i++)
		{
			if (vec[str[i]] == 1)
			{
				cout << str[i] << endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << -1 << endl;
	}

	return 0;
}