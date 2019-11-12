#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int StrToInt(string str) {
		int size = str.size();
		long long ret = 0;
		if (size == 0) 
			return 0;
		//判断有没有指明正负数
		int flag = (str[0] == '-') ? -1 : 1;	
		//判断开头有无正负号
		int tmp = (str[0] == '-' || str[0] == '+') ? 1 : 0;
		for (int i = tmp; i < size; i++)
		{
			if (!('0' <= str[i] && str[i] <= '9')) 
				return 0;
			//ret = (ret << 1) + (ret << 3) + (str[i] & 0xf);
			ret = ret * 10 + (str[i] - '0');
		}
		return ret * flag;
	}
};