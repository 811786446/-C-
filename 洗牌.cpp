//[�����]ϴ��
//ϴ����������ʮ�ֳ�����������Ҫдһ������ģ��ϴ�ƵĹ��̡� ������Ҫϴ2n���ƣ����ϵ��������ǵ�1�ţ���2�ţ���3��һֱ����2n�š�
//���ȣ����ǰ���2n���Ʒֳ����ѣ��������ŵ�1�ŵ���n�ţ��ϰ�ѣ��������� �ŵ�n + 1�ŵ���2n�ţ��°�ѣ������žͿ�ʼϴ�ƵĹ��̣�
//�ȷ������ֵ����һ���ƣ��ٷ������ֵ����һ���ƣ����ŷ������ֵĵ����ڶ����ƣ��ٷ������ֵ� �����ڶ����ƣ�ֱ�����������ֵĵ�һ���ơ�
//���Ű��ƺϲ������Ϳ����ˡ� ������6���ƣ��ʼ�Ƶ�������1, 2, 3, 4, 5, 6�����ȷֳ����飬��������1, 2, 3����������4, 5, 6��
//��ϴ�ƹ����а�˳������� 6, 3, 5, 2, 4, 1�������������ٴκϳ�һ����֮�����ǰ��մ������µ�˳�������ƣ�
//�ͱ��������1, 4, 2, 5, 3, 6�� ���ڸ���һ��ԭʼ���飬������⸱��ϴ��k��֮��������µ����С�
//�������� :
//��һ��һ����T(T �� 100)����ʾ��������������ÿ�����ݣ���һ��������n, k(1 �� n, k �� 100)��
//������һ����2n����a1, a2, ��, a2n(1 �� ai �� 1000000000)����ʾԭʼ������ϵ��µ����С�
//
//������� :
//����ÿ�����ݣ����һ�У����յ����С�����֮���ÿո��������Ҫ����ĩ�������Ŀո�
//
//�������� :
//3
//3 1
//1 2 3 4 5 6
//3 2
//1 2 3 4 5 6
//2 2
//1 1 1 1
//
//�������:
//1 4 2 5 3 6
//1 5 4 3 2 6
//1 1 1 1


#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

vector<int> fun(int n, int k)
{
	vector<int> ret;
	int num;
	int i;
	stack<int> left;
	stack<int> right;

	for (i = 0; i < 2 * n; i++)
	{
		cin >> num;
		ret.push_back(num);
	}
	while (k--)
	{
		for (i = 0; i < n; i++)
		{
			left.push(ret[i]);
		}
		for (i = n; i < 2 * n; i++)
		{
			right.push(ret[i]);
		}
		ret.clear();
		for (i = 0; i < n; i++)
		{
			ret.push_back(right.top());
			ret.push_back(left.top());
			left.pop();
			right.pop();
		}
		reverse(ret.begin(), ret.end());
	}
	
	return ret;
}


int main()
{
	int T = 0;
	int n = 0, k = 0;
	cin >> T;
	vector<vector<int>> arr;
	for (int i = 0; i < T; i++)
	{
		cin >> n >> k;
		vector<int> tmp;
		tmp = fun(n, k);
		arr.push_back(tmp);
	}
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
#endif