//����һ�����������һ��ʱ�临�Ӷ�ΪO(n), ����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
//
//����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900

//һ�������ֵ���Ƶ������У��ж�
#if 0
class PalindromeList {
public:
	bool chkPalindrome(ListNode* A) {
		// write code here
		if(A == NULL)
			return false;
		if(A->next == NULL)
			return true;
		int count = 0;
		int i = 0;
		int arr[900] = { 0 };
		ListNode* p = A;
		while (p != NULL)
		{
			arr[count++] = p->val;
			p = p->next;
		}
		while (i < count)
		{
			if (arr[i] != arr[count - 1])
				return false;
			count--;
			i++;
		}
		return true;
	}
};
#endif


//�������ÿ���ָ�����м�λ�ã��Ѻ�벿�����ã�Ȼ�����ͷ���м��жϣ�

#if 0
class PalindromeList {
public:
	bool chkPalindrome(ListNode* A) {
		// write code here
		if (A == nullptr)
			return false;
		if (A->next == nullptr)
			return true;
		ListNode *slow = A;
		ListNode *fast = A;
		while (fast->next != nullptr && fast != nullptr){
			slow = slow->next;
			fast = fast->next->next;
		}
		ListNode *p = slow->next;
		slow = nullptr;
		fast = p->next;
		while (p->next != nullptr){
			if (fast->next == nullptr)
				fast = fast;
			p->next = slow;
			slow = p;
			p = fast;
			fast = fast->next;
		}
		while (p != nullptr){
			if (p->val != A->val)
				return false;
			p = p->next;
			A = A->next;
		}
		return true;

	}
};
#endif