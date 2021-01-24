#include <stdio.h>
#include <math.h>

int a,n,c;
int get_fang()
{
	c = pow(a,n);
	return c;
}

int main()
{
	scanf("%d%d",&a,&n);
	get_fang();
	printf("aµÄn´Î·½=%d\n",c);
	return 0;
}
