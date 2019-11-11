//A,B,C是好朋友，每个手上有一些糖，已知A-B,B-C,A+B,B+C的值，求A,B,C各自手上有多少个糖？
//y1 = A - B, y2 = B - C, y3 = A + B, y4 = B + C
#define _CRT_SECURE_NO_WARNINGS


#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int y1, y2, y3, y4;
	scanf("%d%d%d%d", &y1, &y2, &y3, &y4);
	int A = -1, B = -1, C = -1;
	A = (y1 + y3) / 2;
	B = (y2 + y4) / 2;
	C = (y4 - y3) / 2;
	if (A - (y1 + y3) / 2 != 0)
	{
		cout << "NO" << endl;
		return 0;
	}
	if (B - (y2 + y4) / 2 != 0)
	{
		cout << "NO" << endl;
		return 0;
	}
	if (C - (y4 - y3) / 2 != 0)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << A << ' ' << B << ' ' << C << ' ' << endl;
	return 0;
}