//简化成任意两个蛋糕的横纵坐标差都不能为2
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int W, H, ret = 0;
	cin >> W >> H;
	vector<vector<int>> a;
	a.resize(W);
	for (auto& e : a)
		e.resize(H, 1);
	for (int i = 0; i < W; ++i)
	{
		for (int j = 0; j < H; ++j)
		{
			if (1 == a[i][j])
			{
				++ret;
				if ((i + 2) < W)
					a[i + 2][j] = 0;
				if ((j + 2) < H)
					a[i][j + 2] = 0;
			}
		}
	}
	cout << ret << endl;
	return 0;
}
