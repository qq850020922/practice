#include <stdio.h>
int main()
{
	char a[] = "Struggle for a better future";
	int i,len;
	int count = 0,temp_len = 0,temp = 0,max = 0;
	
	for (len = 0;a[len] != '\0';len++);

	for (i=0;i<len+1;i++)
	{
		if (a[i]==' ' || a[i]=='\0')
		{
			count++;
			if (max < temp)
			{
				max = temp;
			}
			temp = 0;
		}
		else 
		{
			temp++;
			temp_len++;
		}
	}
	printf("��������:%d\n",count);
	printf("�ַ�������:%d\n",temp_len);
	printf("�������:%d\n",max);
	return 0;
}
