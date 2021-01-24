/*
#include <stdio.h>
int main(){
	int a[10] = {1};
	int b=0,i;
	for (i=0;i<10;i++)
	{
		a[i] = i+1;
	}
	for (i=1;i<1000;i++)
	{
		b = (b+1+i)%10;
		a[b] = 0; 
	}
	for (i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
} 

	1		2		3		4		5		6		7		8		9		10
	a[0]	a[1]	a[2]	a[3]	a[4]	a[5]	a[6]	a[7]	a[8]	a[9]
	x				x				`		x				`				x
	i=0			0 = 0 
	i=1			2 = 0 + 2
	i=2			5 = 2 + 3
	i=3			9 = 5 + 4
	i=4			14= 9 + 5	4
	i=5			20= 14+ 6	0
	i=6			27= 20+ 7	7 
	...
	i= 			b = b+i+1%10
 
*/
//统计进洞次数
#include <stdio.h>
int main(){
	int a[10]={0};
	int i,j=0;
	
	for(i=1;i<=1000;i++)
	{
		j = (j+i+1)%10;
		a[j]++;
	}
	for (i=0;i<10;i++)
	printf("%d ",a[i]);
} 
