//������дһ�������ҵ������������ཻ����ʼ�ڵ㣬��ʼ���֮��Ľ��ȫ���ཻ

//һ��ͳ�����б��ȣ�ȡ��  abs() ȡ����ֵ
//�����������ߣ�Ȼ��Ƚ�
#if 0
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == nullptr || headB == nullptr)
			return nullptr;
		ListNode* _long = headA;
		ListNode* _short = headB;
		int num1 = 0;
		int num2 = 0;
		while (_long){
			num1++;
			_long = _long->next;
		}
		while (_short){
			num2++;
			_short = _short->next;
		}
		_long = headA;
		_short = headB;
		if (num1 < num2){
			_long = headB;
			_short = headA;
		}

		num1 = abs(num1 - num2);
		while (num1--)  {
			_long = _long->next;
		}
		while (_long != nullptr && _short != nullptr){
			if (_long == _short)
				return _long;
			_long = _long->next;
			_short = _short->next;
		}
		return nullptr;
	}
};
#endif

