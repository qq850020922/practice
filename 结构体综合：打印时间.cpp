1定义时间结构体:包含年、月、日成员
2完成set_date函数
	函数声明如下: void set_date (struct date *p, int y, int m, int d);
3.完成print_date函数
	函数声明如下: void print_date(struct date *p);完成main函数，
4.实现如下功能:
	1)定义时间结构体变量dl
	2)输入时间，并使用set_date函数设置给变量dl
	3)使用print_date函数输出设置的时间

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
