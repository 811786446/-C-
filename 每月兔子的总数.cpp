

//��һֻ���ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�С���ӳ����������º�ÿ��������һֻ���ӣ�
//�������Ӷ���������ÿ���µ���������Ϊ���٣�

//�ݹ�ʵ��
#include<iostream>
using namespace std;

int func(int month)
{
	if (month == 1 || month == 2)
		return 1;
	return func(month - 1) + func(month - 2);
}

int main()
{
	int month = 0;
	int ret = 0;
	while (cin >> month)
	{
		ret = func(month);
		cout << ret << endl;
	}
	return 0;
}


//�ǵݹ�
//�ǵݹ�ʵ��
#include<iostream>
using namespace std;

int GetNumOfRabbit(int month) {
	if (month == 1 || month == 2)
		return 1;
	int first = 1;
	int second = 1;
	int result = 1;
	for (int i = 2; i < month; ++i) {
		result = second + first;
		first = second;
		second = result;
	}
	return result;
}

int main() {
	int month;
	while (cin >> month) {
		cout << GetNumOfRabbit(month) << endl;
	}
	return 0;
}
