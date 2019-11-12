#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		stack<char> arr;
		for (int i = 0; i < n; i++)
		{
			if (A[i] != '(' && A[i] != ')')
				return false;
			else if (A[i] == '(')
				arr.push(A[i]);
		}
		for (int j = 0; j < n; j++)
		{
			if (A[j] == ')')
				arr.pop();
		}
		if (arr.empty())
			return true;
		return false;

	}
};