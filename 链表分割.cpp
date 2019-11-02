//编写代码，以给定值x为基准将链表分割成两部分，所有小于x的结点排在大于或等于x的结点之前
//给定一个链表的头指针 ListNode* pHead，请返回重新排列后的链表的头指针。注意：分割以后保持原来的数据顺序不变

//创建两个链表，一个存小于x的，一个存大于等于x的，让第一个链表的尾指向第二个链表的头
#if 0
class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		// write code here
		ListNode *gH, *gT, *lH, *lT, *cur;
		gT = gH = lH = lT = NULL;
		if (pHead == NULL)
		{
			return pHead;
		}
		cur = pHead;
		while (cur)
		{
			if (cur->val < x)
			{
				if (lH == NULL)
				{
					lT = lH = cur;
				}
				else{
					lT->next = cur;
					lT = lT->next;
				}
			}
			else{
				if (gH == NULL)
				{
					gT = gH = cur;
				}
				else{
					gT->next = cur;
					gT = gT->next;
				}
			}
			cur = cur->next;
		}
		if (gT)
		{
			gT->next = NULL;
		}
		if (lH == NULL)
			return gH;
		else {
			lT->next = gH;
			return lH;
		}
	}
};
//如果写成带头链表更好
#endif