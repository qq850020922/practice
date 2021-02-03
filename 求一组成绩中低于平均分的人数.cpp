//编写函数fun：从n个学生中统计出低于平均分的人数，由返回值返回，平均值放在形参*ptr_aver所指的存储单元中。
//成绩：80.5  60  72  90.5  98  51.5  88  64 

#include <stdio.h>

int fun(float *p,int n,float *ptr_aver)
{
	int i,count = 0;
	float sum = 0;
	for(i=0; i<n; i++)
	{
		sum += p[i];
	}
	*ptr_aver = sum/n;
	for(i=0; i<n; i++)
	{
		if(p[i] < *ptr_aver)
			count++;
	}
	return count;
}

int main()
{
	float a[8],avg;
	int i;
	for(i=0; i<8; i++)
	{
		scanf("%f",&a[i]);
	}
	int number = fun(a,8,&avg);
	printf("number: %d  avg: .2%d",number,avg);
	return 0;
}
