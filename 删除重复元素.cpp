#include<iostream>
#include<string>
#include<vector>
using namespace std;



//����һ���ַ�����������ַ����������ַ�����
int main()
{
	string str;
	int hash[256] = { 0 };
	
	while (cin >> str){
		for (int i = 0; str[i] != '\0'; i++)
		{
			++hash[str[i]];
			if (hash[str[i]] == 1)
				cout << str[i];
		}
		for (int i = 0; i < 256; i++)
		{
			hash[i] = 0;
		}
	}
	return 0;
}

