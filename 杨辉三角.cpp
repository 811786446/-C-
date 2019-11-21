#include<vector>
template <class T>


class Solution{
public:
	vector<vector<int>> generate(int numRows){
		//��ʼ�ռ�Ϊ0��������������ݻᵼ������[ ] ��������
		vector<vector<int>> Matrix;
		//���ݾ��󣬾�������
		Matrix.resize(numRows);
		for (int i = 0; i < numRows; i++)
		{
			//����ÿһ���ڲ�����������
			Matrix[i].resize(i + 1, 1);
			for (int j = 1; j < i; j++)
			{
				Matrix[i][j] = Matrix[i - 1][j] + Matrix[i - 1][j - 1];
			}
		}
		return Matrix;
	}
};