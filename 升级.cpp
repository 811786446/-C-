#include <iostream>
#include <vector>
using namespace std;

int func(int y, int x)
{
	while (x%y != 0)
	{
		int left = x%y;
		x = y;
		y = left;
	}
	return y;

}

int main()
{
	int n = 0, a = 0;
	while (cin >> n >> a)
	{
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		if (a == 0)
		{
			cout << 0 << endl;
			return 0;
		}
		for (int i = 0; i < arr.size(); i++)
		{
			if (a >= arr[i])
				a += arr[i];
			else
				a += func(a, arr[i]);
		}

		cout << a << endl;


	}


	return 0;
}
