#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

stack<char> fun(char* _str, stack<char> _s1, stack<char> _s2)
{
	char tmp = '0';
	int len = strlen(_str);
	//�����һ���ַ���������� \0 ��֤�����ַ�����ջ���
	for (int i = 0; i <= len; i++)
	{	
		//������յ��ո�s1ջ�ÿգ�����ѹ��s2ջ
		//����� '\0' ��ʾ�����һ������
		if (*_str == ' ' || *_str == '\0')
		{
			_s1.push(' ');
			while (_s1.size() != 0)
			{
				tmp = _s1.top();
				_s2.push(tmp);
				_s1.pop();
			}
			_str++;
		}
		//�����Ϊ�ո񣬼���ѹ��s1
 		else
		{
			_s1.push(*_str);
			_str++;
		}
	}
	return _s2;
}

int main()
{
	stack<char> s1;
	stack<char> s2;
	char str[100] = { 0 };
	cin.getline(str, 100);
	
	s2 = fun(str, s1, s2);
	while (s2.size() != 0)
	{
		cout << s2.top();
		s2.pop();
	}
	return 0;
}