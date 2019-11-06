#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

stack<char> fun(char* _str, stack<char> _s1, stack<char> _s2)
{
	char tmp = '0';
	int len = strlen(_str);
	//多接收一个字符串结束后的 \0 保证所有字符串入栈完毕
	for (int i = 0; i <= len; i++)
	{	
		//如果接收到空格，s1栈置空，依次压入s2栈
		//如果是 '\0' 表示是最后一个单词
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
		//如果不为空格，继续压入s1
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