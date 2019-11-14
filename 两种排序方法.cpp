//������n���ַ����ַ���, ���������ַ������ȶ��ǲ�ͬ��
//���� : 1�����ַ������ֵ�����������
//	 car<carriage<cats<doggies
//	 ����2�����ַ����ĳ�����������
//	 car<cars<doggies<carriage
//	 ������֪���Լ�����Щ�ַ�������˳���Ƿ�����������
//����������
//	 ��һ��Ϊ�ַ�������n(n��100)
//	 ��������n��, ÿ��һ���ַ���, �ַ������Ⱦ�С��100,
//�������:
//�����Щ�ַ����Ǹ����ֵ������ж����Ǹ��ݳ�������lexicographically
//������ݳ������ж������ֵ����������lengths
//������ַ�ʽ���������"both", �������none

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