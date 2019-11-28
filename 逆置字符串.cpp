#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		string::reverse_iterator ptr = str.rbegin();
		while (ptr < str.rend())
		{
			cout << *ptr;
			ptr++;
		}
		cout << endl;
	}
	return 0;
}