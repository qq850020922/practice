#include <stdio.h>
int main()
{
	int a[3][4] = {{1,2,6,4},{5,6,7,8},{9,10,11,12}};
	int i,j,temp,max,min;
	
	for(j=0; j<3; j++)
	{
	max = a[0][0];
	for (i=1; i<4; i++)
	{
		if (max < a[j][i])
		{
			max = a[j][i];
			temp = i;
		}
	}
	min = max;
	for (i=0; i<3; i++)
	{
		if (min > a[i][temp])
		{
			max = a[i][temp];
		}
	}
	if (max == min)
		printf("%d\n",max);
	}
}
