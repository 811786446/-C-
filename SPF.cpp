#include "head.h"

void SPFfun(struct PCB arr[], int n, float& t1, float& t2)
{
	int cur_time = 0;
	for (int i = 0; i < n; i++)
	{
		
		int index = i;	
		int min_work = arr[i].s_time;
		//如果当前没有进程到达，找到最近到达进程组的最短进程
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
		//找到当前已经到达进程的最短任务
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
		//第一个元素特殊处理
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
		cout << "进程标识符：" << arr[i].PID << endl;
		cout << " 进入时间：" << arr[i].i_time << endl;
		cout << " 服务时间：" << arr[i].s_time << endl;
		cout << " 完成时间：" << arr[i].o_time << endl;
		cout << " 周转时间：" << arr[i].r_time << endl;
		cout << " 带权周转时间： " << arr[i].dr_time << endl;
		cout << "--------------------------------" << endl;
	}
	cout << "###########################" << endl;
	cout << "平均周转时间： " << t1 << endl;
	cout << "平均带权周转时间： " << t2 << endl;
	cout << "###########################" << endl;
	
	

}