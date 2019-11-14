#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//�������г��ִ�������һ������֡���������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
//��������һ������Ϊ9������{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }�������� ��2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0


//����һ������������֮�󣬳��ִ�������һ�����һ�������м��Ǹ�����
class Solution{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		int i = 0;
		int count = 0;
		if (numbers.empty())
			return 0;
		sort(numbers.begin(), numbers.end());
		//��Ϊ�ֿ��ܲ������������������Ҫ�ж���������ֵĴ�����û�г���һ��
		int ret = numbers[numbers.size() / 2];
		for (i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == ret)
				count++;
		}
		return (count > (numbers.size() / 2)) ? ret : 0;
	}
};

//��������ʹ����������һ��num��ʾ���ڼ������֣���һ��count��ʾ������ֳ��ֵĴ���Ĭ��Ϊ1��
//�����������飬�����������ֵ���num��count++������--�����count == 0 ��ʹnum������һ������
//���������������count������0��һ�����ǳ��ִ����������֣��ٽ����ж�
class Solution{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers)
	{
		if (numbers.empty())
			return 0;
		if (numbers.size() == 1)
			return numbers[0];
		int num = numbers[0];
		int count = 1;
		//�������ӵڶ�����ʼ�ǣ�����numbers[0]�����һ��
		for (int i = i; i < numbers.size(); i++)
		{
			if (num == numbers[i])
				count++;
			else
				count--;
			if (count == 0)
			{
				num = numbers[i];
				count = 1;
			}
		}
		count = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == num)
			{
				count++;
			}
		}
		return count > (numbers.size() / 2) ? num : 0;
	}
};