
//不用算数运算符实现两个int的相加，返回和

class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		int sum = 0;
		//进位为0的时候结束循环
		while (B != 0)
		{
			//异或得到每次按位相加不算近位的和
			sum = A ^ B;
			//得出近位，因为同为1的时候会产生向上进一位，
			//所以使用按位&得到产生进位的位置，左移一位即为所有进位的值
			//循环 A ^ B，每次加上进位，判断是否还有进位
			B = (A & B) << 1;
			A = sum;
		}
		return sum;
	}
};