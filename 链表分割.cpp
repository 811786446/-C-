//��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ
//����һ�������ͷָ�� ListNode* pHead���뷵���������к�������ͷָ�롣ע�⣺�ָ��Ժ󱣳�ԭ��������˳�򲻱�

//������������һ����С��x�ģ�һ������ڵ���x�ģ��õ�һ�������βָ��ڶ��������ͷ
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
//���д�ɴ�ͷ�������
#endif