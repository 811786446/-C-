
#include<iostream>
#include<string>
using namespace std;

int NumRoot(int n)
{
	int sum = 0;
	while (n / 10)
	{
		sum += n % 10;
		n /= 10;
	}
	sum += n % 10;
	if (sum / 10 == 0)
		return sum;
	else
		return NumRoot(sum);
}

int main()
{
	string s;
	int num = 0;
	while (cin >> s) 
	{
		num = 0;
		for (int i = 0; i<s.size(); ++i)
		{
			num += s[i] - '0'; 
		}
		cout << NumRoot(num) << endl;
	}
	return 0;
}