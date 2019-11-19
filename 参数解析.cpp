//在命令行输入如下命令：
//xcopy  / s c:\ d : \，
//参数如下： 
//参数1：命令字xcopy 
//参数2：字符串 / s
//参数3：字符串c : \
//参数4 : 字符串d : \
//请编写一个参数解析程序，实现将命令行各个参数解析出来。
//解析规则： 
//	 1.参数分隔符为空格
//	 2.对于用“”包含起来的参数，如果中间有空格，不能解析为多个参数。
//	 比如在命令行输入xcopy  / s “C:\program files” “d : \”时，参数仍然是4个，
//     第3个参数应该是字符串C : \program files，而不是C : \program，注意输出参数时，需要将“”去掉，引号不存在嵌套情况。
//	3.参数不定长
//	4.输入由用例保证，不会出现不符合要求的输入
//

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		//保存最后需要输出的结果
		vector<string> ret;
		//临时保存每一个参数
		string tmp;
		//false表示不是“”内的内容
		bool flag = false;

		for (int i = 0; i < str.size(); i++)
		{
			//如果是引号内的内容就只判断是不是引号，不用判断空格
			if (flag == true)
			{
				//此处需要把引号转义
				if (str[i] != '\"')
					tmp += str[i];
				else
				{
					flag = false;
				}
			}
			//普通情况
			else
			{
				if (str[i] == '\"')
				{
					flag = true;
				}
				//遇到空格说明一个参数接收完毕，保存进ret，并且tmp清理
				else if (str[i] == ' ')
				{
					ret.push_back(tmp);
					tmp.clear();
				}
				else
					tmp += str[i];
			}
		}
		//将最后一个还在tmp中的字符串保存到ret中
		ret.push_back(tmp);
		cout << ret.size() << endl;
		for (auto e : ret)
			cout << e << endl;
	}
	return 0;
}