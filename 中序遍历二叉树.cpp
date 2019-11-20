#include<iostream>
#include<vector>
#include<stack>
using namespace std;


template <class T>
vector<T> InOrder(TreeNode<T> * root)
{
	stack<TreeNode<T> *> s;
	vector<T> res;
	TreeNode<T>* cur = root;
	while (cur || !s.empty())
	{
		for (; cur; cur = cur->left)
		{
			s.push(cur);
		}
		if (!s.empty())
		{
			cur = s.top();
			res.push_back(cur->data);
			cur.pop();
			cur = cur->right;
		}
	}
	return res;
}