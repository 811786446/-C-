//在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。
//例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

//三个指针，cur指向重复结点的第一个结点，next向后查找结束重复结点的，prev来保存重复结点前面的结点，用于最后连接链表
#if 0
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		ListNode *prev, *cur, *next;
		if (pHead == NULL || pHead->next == NULL)
			return pHead;
		prev = NULL;
		cur = pHead;
		next = pHead->next;
		while (next){
			if (cur->val != next->val){
				prev = cur;
				cur = next;
				next = next->next;
			}
			else{
				while (next && cur->val == next->val)
				{
					next = next->next;
				}
				while (cur != next)
				{
					ListNode *tmp = cur->next;
					free(cur);
					cur = tmp;
				}
				if (prev == NULL)
				{
					pHead = next;
				}
				else
					prev->next = cur;
				if (next)
					next = next->next;
			}
		}
		return pHead;
	}
};
#endif