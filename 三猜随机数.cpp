//产生一个10以内的随机数，输入判断三次。 

#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
int main()
{
	int a,i,b;
	srand(time(0));
	b = rand()%10;
	printf("猜一个数: ");

	for (i=0;i<3;i++)
	{
		scanf("%d",&a);
		if(b==a)
		{
			printf("猜对啦!");
			return 0;
		}
		if(b>a && i!=2)
		{
			printf("小了,重输入:");
		}
		else if(b<a && i!=2) {
			printf("大了，冲输入：");
		}
		else if (b==a)
			printf("猜对啦!");
		else
			printf("游戏结束！"); 
	}
	return 0;
} 
