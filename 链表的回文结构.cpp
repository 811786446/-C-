//对于一个链表，请设计一个时间复杂度为O(n), 额外空间复杂度为O(1)的算法，判断其是否为回文结构。
//
//给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900

//一、链表的值复制到数组中，判断
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


//二、利用快慢指针求到中间位置，把后半部分逆置，然后从两头向中间判断；

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