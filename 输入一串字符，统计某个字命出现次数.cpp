#include <stdio.h>

int get_number(char *s,char letter)
{
	int i,count = 0;
	for(i=0; s[i] != '\0'; i++)
	{
		if(s[i] == letter)
			count++;
	}
	return count;
}
int main()
{
	char s[100];
	puts("input:");
	gets(s);
	int number = get_number(s,'e');
	printf("%d\n",number);
	return 0;
}
