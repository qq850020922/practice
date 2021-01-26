//打印二维 
/*
#include <stdio.h>
int main()
{
	int a[3][3] = {{1},{4},{7}};
	int i,j,x,y;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			a[i][j+1] = a[i][j] +1; 
		}
	}
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
	printf("\n");
	}
	scanf("%d%d",&x,&y);
	if (a[x-1][y-1] == 7)
	printf("yes %d\n",a[x-1][y-1]);
	else 
	printf("no %d\n",a[x-1][y-1]);
	return 0;
}
*/
//二维数组元素相加

#include <stdio.h>
int main()
{
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int c[3][3] = {0};
	int i,j,sum=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];	
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);	
		}
	printf("\n");		
	}	
}
