//输出斐波那契数列前20项 1 1 2 3 5 8 13 21.... 

#include <stdio.h>
int main()
{
	int i,b=0;
	int a[20] = {1,1};
	for(i=2;i<20;i++)
	{
		a[i] = a[i-2]+a[i-1];
	}
	for(i=0;i<20;i++)
		printf("%d\n",a[i]);	
} 

