//小易来到了一条石板路前，每块石板上从1挨着编号为：1、2、3… 这条石板路要根据特殊的规则才能前进：对于小易当前所在的编号为K的
//石板，小易单次只能往前跳K的一个约数(不含1和K)步，即跳到K + X(X为K的一个非1和本身的约数)的位置。
//小易当前处在编号为N的石板，他想跳到编号恰好为M的石板去，小易想知道最少需要跳跃几次可以到达。 例如： N = 4，M = 24：
//4->6->8->12->18->24 于是小易最少需要跳跃5次，就可以从4号石板跳到24号石板
//输入描述 :
//
//输入为一行，有两个整数N，M，以空格隔开。(4 ≤ N ≤ 100000) (N ≤ M ≤ 100000)
//
//输出描述 :
//
//	 输出小易最少需要跳跃的步数, 如果不能到达输出 - 1




#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

//计算约数
void divsornum(int n, vector<int>& v)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0) {
			v.push_back(i);
			if (n / i != i)
				v.push_back(n / i);
		}
	}
}
int main()
{
	int N, M;
	while (cin >> N >> M)
	{
		vector<int> map(M + 1, 0);
		map[N] = 1;
		for (int i = N; i < M; ++i)
		{
			if (map[i] == 0)continue;
			vector<int> v;
			divsornum(i, v);//把i的约数存在v中
			for (int j = 0; j < v.size(); ++j)
			{
				if (v[j] + i <= M && map[v[j] + i] != 0)
					map[v[j] + i] = min(map[v[j] + i], map[i] + 1);
				else if (v[j] + i <= M)
					map[v[j] + i] = map[i] + 1;
			}
		}
		if (map[M] == 0)
			cout << -1 << endl;
		else
			cout << map[M] - 1 << endl;
	}
	return 0;
}
