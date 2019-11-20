
#include<iostream>
using namespace std;
const int days[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
int main() {
	int y, m, d;
	while (cin >> y >> m >> d) {
		int ans = days[m - 1] + d;
		if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m > 2)
			ans++;
		cout << ans << endl;
	}
	return 0;
}