

//有一只兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子，
//假如兔子都不死，问每个月的兔子总数为多少？

//递归实现
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


//非递归
//非递归实现
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
