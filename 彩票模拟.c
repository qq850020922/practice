 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int i,j,count = 0;
	int user[7] = {0};
	int lottery[7] = {0};
	
	for (i=0;i<7;i++)
	{
		lottery[i] = rand()%35+1;
		for(j=0;j<i;j++)		//防止重复 
		{
			if(lottery[i] == lottery[j])
			{
				i--;		// 抵消掉i++,重新随机 
				break;
			}
		}
	}

	printf("买入1-35中7个不同数：");
	
	for (i=0;i<7;i++)
	{
		scanf("%d",&user[i]);
		while(user[i] < 1 || user[i] > 35)
		{
			printf("超出范围，重新输入1-35中7个不同数：");
			scanf("%d",&user[i]);
		}
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(user[j] == lottery[i])
			{
				count++;
				break;
			}
		}
	}
#if 1    //帮助调试用的，为0时不启用，为1时启用 
		for(i=0;i<7;i++)
	{ 
		printf("彩票中奖号码%d  ",lottery[i]);
	}
	printf("\n");
#endif
	switch(count)
	{
		case 7: printf("50000\n"); break;
		case 6: printf("5000\n"); break;
		case 5: printf("500\n"); break;
		case 4: printf("50\n"); break;
		case 3: printf("5\n"); break;
		default: printf("sorry\n"); break;
	}
	return 0;
}

