
#include<stdio.h>
#define n 10
int main(){
	int a[10] = {20,54,10,35,14,22,52,36,45,5};
	int i,j,temp;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<9-j;i++)
		{
			if (a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	for (i=0;i<10;i++)
	printf("%d\n",a[i]);
}
