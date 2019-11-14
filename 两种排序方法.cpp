//考拉有n个字符串字符串, 任意两个字符串长度都是不同的
//方法 : 1根据字符串的字典序排序。例如
//	 car<carriage<cats<doggies
//	 方法2根据字符串的长度排序。例如
//	 car<cars<doggies<carriage
//	 考拉想知道自己的这些字符串排列顺序是否满足这两种
//输入描述：
//	 第一行为字符串个数n(n≤100)
//	 接下来的n行, 每行一个字符串, 字符串长度均小于100,
//输出描述:
//如果这些字符串是根据字典序排列而不是根据长度排序lexicographically
//如果根据长度排列而不是字典序排列输出lengths
//如果两种方式都符合输出"both", 否则输出none

#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

bool isDic(vector<string> _arr)
{
	set<string> s1;
	unsigned int i = 0;
	for (i = 0; i < _arr.size(); i++)
	{
		s1.insert(_arr[i]);
	}
	set<string>::iterator p1 = s1.begin();
	i = 0;
	while (i < _arr.size())
	{
		if (_arr[i] != *p1)
			return false;
		p1++;
		i++;
	}
	return true;
}

bool isLen(vector<string> _arr)
{
	set<int> s2;
	unsigned int i = 0;
	for (i = 0; i < _arr.size(); i++)
	{
		s2.insert(_arr[i].size());
	}
	set<int>::iterator p2 = s2.begin();
	i = 0;
	while (i < _arr.size())
	{
		if (_arr[i].size() != *p2)
			return false;
		p2++;
		i++;
	}
	return true;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<string> arr(n+1);
	for (int i = 0; i <= n; i++)
	{
		getline(cin, arr[i]);
	}
	if (isDic(arr) && isLen(arr))
	{
		cout << "both" << endl;
		return 0;
	}
	else if (isDic(arr))
	{
		cout << "lexicographically" << endl;
		return 0;
	}
	else if (isLen(arr))
	{
		cout << "lengths" << endl;
		return 0;
	}
	else
		cout << "none" << endl;


	return 0;
}