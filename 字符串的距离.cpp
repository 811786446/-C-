//¼ÆËã×Ö·û´®µÄ±à¼­¾àÀë
//¼ÆËã×Ö·û´®µÄ±à¼­¾àÀë

#include <iostream>
#include <string>
using namespace std;

int mymin(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;
	if (b <= a && b <= c)
		return b;
	else
		return c;

}


int main()
{
	string str1;
	string str2;
	while (cin >> str1 >> str2)
	{
		int i = 0, j = 0;
		int arr[1024][1024] = { 0 };
		for (; i < str1.size(); i++)
			arr[i][0] = i;
		for (; j < str2.size(); j++)
			arr[0][j] = j;
		for (i = 1; i <= str1.size(); i++)
		{
			for (j = 1; j <= str2.size(); j++)
			{
				if (str1[i - 1] == str2[j - 1])
					arr[i][j] = arr[i - 1][j - 1];
				else
					arr[i][j] = mymin(arr[i - 1][j], arr[i][j - 1], arr[i - 1][j - 1]) + 1;
			}
		}
		cout << arr[str1.size()][str2.size()] << endl;
	}

	return 0;
}