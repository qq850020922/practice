//����һ��10���ڵ�������������ж����Ρ� 

#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
int main()
{
	int a,i,b;
	srand(time(0));
	b = rand()%10;
	printf("��һ����: ");

	for (i=0;i<3;i++)
	{
		scanf("%d",&a);
		if(b==a)
		{
			printf("�¶���!");
			return 0;
		}
		if(b>a && i!=2)
		{
			printf("С��,������:");
		}
		else if(b<a && i!=2) {
			printf("���ˣ������룺");
		}
		else if (b==a)
			printf("�¶���!");
		else
			printf("��Ϸ������"); 
	}
	return 0;
} 
