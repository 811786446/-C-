
//“输入每手牌可能是个子，对子，顺子（连续5张），三个，炸弹（四个）和对王中的一种，
//不存在其他情况，由输入保证两手牌都是合法的，顺子已经从小到大排列“
//这句规则让牌面类型的确定和大小的比较直接可以转换为牌个数的比较了，这是解决测试问题的捷径！
//所以一定要善于利用题目已知条件！！！
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string line;
	while (getline(cin, line)){
		if (line.find("joker JOKER") != -1)
			cout << "joker JOKER" << endl;
		else{
			int dash = line.find('-');
			string car1 = line.substr(0, dash);
			string car2 = line.substr(dash + 1);
			int c1 = count(car1.begin(), car1.end(), ' ');
			int c2 = count(car2.begin(), car2.end(), ' ');
			string first1 = car1.substr(0, car1.find(' '));
			string first2 = car2.substr(0, car2.find(' '));
			string str = "345678910JQKA2jokerJOKER";
			if (c1 == c2){
				if (str.find(first1)>str.find(first2))
					cout << car1 << endl;
				else
					cout << car2 << endl;
			}
			else
			if (c1 == 3)
				cout << car1 << endl;
			else if (c2 == 3)
				cout << car2 << endl;
			else
				cout << "ERROR" << endl;
		}
	}
}