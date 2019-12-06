#include "head.h"

void SPFfun(struct PCB arr[], int n, float& t1, float& t2)
{
	int cur_time = 0;
	for (int i = 0; i < n; i++)
	{
		
		int index = i;	
		int min_work = arr[i].s_time;
		//�����ǰû�н��̵���ҵ����������������̽���
		if (cur_time < arr[i].i_time)
		{
			for (int j = i; j < n; j++)
			{
				if (arr[j].s_time < min_work)
				{
					min_work = arr[j].s_time;
					index = j;
				}
			}
		}
		//�ҵ���ǰ�Ѿ�������̵��������
		for (int j = i; j < n; j++)
		{
			if (arr[j].i_time <= cur_time && arr[j].s_time < min_work)
			{
				min_work = arr[j].s_time;
				index = j;
			}
		}
		if (index != i)
		{
			swap(arr[i], arr[index]);
		}
		//��һ��Ԫ�����⴦��
		if (i == 0)
			arr[i].i_time = arr[i].i_time;
		else
			arr[i].i_time = cur_time;
		arr[i].o_time = arr[i].i_time + arr[i].s_time;
		cur_time = arr[i].o_time;
		arr[i].r_time = arr[i].o_time - arr[i].i_time;
		arr[i].dr_time = arr[i].r_time / arr[i].s_time;
		t1 += arr[i].r_time;
		t2 += arr[i].dr_time;
	}

	t1 = t1 / n;
	t2 = t2 / n;

	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "���̱�ʶ����" << arr[i].PID << endl;
		cout << " ����ʱ�䣺" << arr[i].i_time << endl;
		cout << " ����ʱ�䣺" << arr[i].s_time << endl;
		cout << " ���ʱ�䣺" << arr[i].o_time << endl;
		cout << " ��תʱ�䣺" << arr[i].r_time << endl;
		cout << " ��Ȩ��תʱ�䣺 " << arr[i].dr_time << endl;
		cout << "--------------------------------" << endl;
	}
	cout << "###########################" << endl;
	cout << "ƽ����תʱ�䣺 " << t1 << endl;
	cout << "ƽ����Ȩ��תʱ�䣺 " << t2 << endl;
	cout << "###########################" << endl;
	
	

}