//���ִ�������һ������֣�һ��������֮���м������

#if 0
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		sort(gifts.begin(), gifts.end());
		int ret = gifts[n / 2];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (gifts[i] == ret)
				count++;
		}
		if (count >= n / 2)
			return ret;
		else
			return 0;
	}
};
#endif