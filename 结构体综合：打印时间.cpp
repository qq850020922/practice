1����ʱ��ṹ��:�����ꡢ�¡��ճ�Ա
2���set_date����
	������������: void set_date (struct date *p, int y, int m, int d);
3.���print_date����
	������������: void print_date(struct date *p);���main������
4.ʵ�����¹���:
	1)����ʱ��ṹ�����dl
	2)����ʱ�䣬��ʹ��set_date�������ø�����dl
	3)ʹ��print_date����������õ�ʱ��

#include <stdio.h>

struct date
{
	int year;
	int mouth;
	int day;	
};

void set_date(struct date *p, int y, int m, int d)
{
	p->year = y;
	p->mouth = m;
	p->day = d;
	return ;
}

void print_date(struct date *p)
{
	printf("%d-%d-%d\n",p->year,p->mouth,p->day);
	return ;
}
int main()
{
	int year,mouth,day;
	struct date dl;
	scanf("%d%d%d",&year,&mouth,&day);
	set_date(&dl,year,mouth,day);
	print_date(&dl);
	return 0;
}
