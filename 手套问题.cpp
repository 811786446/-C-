//在地下室里放着n种颜色的手套，手套分左右手，但是每种颜色的左右手手套个数不一定相同。a先生现在要出门，
//所以他要去地下室选手套。但是昏暗的灯光让他无法分辨手套的颜色，只能分辨出左右手。所以他会多拿一些手套，
//然后选出一双颜色相同的左右手手套。现在的问题是，他至少要拿多少只手套(左手加右手)，才能保证一定能选出一双颜色相同的手套。
//
//给定颜色种数n(1≤n≤13), 同时给定两个长度为n的数组left, right, 分别代表每种颜色左右手手套的数量。
//数据保证左右的手套总数均不超过26，且一定存在至少一种合法方案。
//
//测试样例：
//
//4, [0, 7, 1, 6], [1, 5, 0, 6]
//
//返回：10(解释：可以左手手套取2只，右手手套取8只)
//
//

class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		// write code here
		//记录总值
		int sum = 0;
		//记录左手套除0之外的总个数和数量最少的数目
		int left_sum = 0, left_min = 27;
		//记录右手套除0之外的总个数和数量最少的数目
		int right_sum = 0, right_min = 27;
		for (int i = 0; i < n; i++)
		{
			//如果有数目为0的颜色，将该颜色中的左右手套所有全部拿出来
			if (left[i] == 0 || right[i] == 0)
				sum = sum + left[i] + right[i];
			//如果不为0
			else
			{
				left_sum += left[i];
				right_sum += right[i];
				//时刻保持是数目最少的颜色的个数
				left_min = left_min < left[i] ? left_min : left[i];
				right_min = right_min < right[i] ? right_min : right[i];
			}
		}
		//将手套中不为0的总数减去数目最少的再+1个数目最少那个颜色的手套
		left_sum = left_sum - left_min + 1;
		right_sum = right_sum - right_min + 1;
		//找出左右手套拿法哪边拿的少，+1是因为若左手他需要拿到的少，就在左手套中取，之后在右手套中随便取一个就可以匹配
		if (left_sum < right_sum)
		{
			return (left_sum + sum + 1);
		}
		else
		{
			return (right_sum + sum + 1);
		}
	}
};