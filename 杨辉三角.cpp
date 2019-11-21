#include<vector>
template <class T>


class Solution{
public:
	vector<vector<int>> generate(int numRows){
		//初始空间为0，如果不进行扩容会导致下面[ ] 操作出错
		vector<vector<int>> Matrix;
		//扩容矩阵，就是行数
		Matrix.resize(numRows);
		for (int i = 0; i < numRows; i++)
		{
			//扩容每一行内部，就是列数
			Matrix[i].resize(i + 1, 1);
			for (int j = 1; j < i; j++)
			{
				Matrix[i][j] = Matrix[i - 1][j] + Matrix[i - 1][j - 1];
			}
		}
		return Matrix;
	}
};