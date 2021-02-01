#include <stdio.h>

void swap(int *p,int n)
{
	int i,temp;
	for (i=0; i<n/2; i++)
	{
		temp = p[i];
		p[i] = p[n-1-i];
		p[n-1-i] = temp;
	}
	return ;
}
int main()
{
	int a[8] = {1,2,3,4,5,6,7,8};
	swap(a,8);
	int i;
	for(i=0; i<8; i++)
		printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
