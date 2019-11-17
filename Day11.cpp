//求一个byte数字对应的二进制数字中1的最大连续数，

#if 0

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0, maxsize = 0;
		while (n)
		{
			if (n & 1 == 1)
			{
				count++;
				maxsize = (maxsize > count) ? maxsize : count;
			}
			else
				count = 0;
			n = n >> 1;
		}

		cout << maxsize << endl;
	}
	return 0;
}




//有一颗无穷大的满二叉树，其结点按照根节点一层一层地从左往右并依次编号，根节点编号为1.现有两个结点a， b。请返回a和b地最近公共祖先编号
class LCA {
public:
	int getLCA(int a, int b) {
		// write code here

		while (a != b)
		{
			if (a > b)
				a /= 2;
			else
				b /= 2;
		}
		return a;
	}

};

#endif