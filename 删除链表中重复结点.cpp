//��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣
//���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5

//����ָ�룬curָ���ظ����ĵ�һ����㣬next�����ҽ����ظ����ģ�prev�������ظ����ǰ��Ľ�㣬���������������
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