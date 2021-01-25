#include <stdio.h>
int main()
{
	char a[20] = {"hello "};
	char b[20] = {"world "};
	int len = 0;
	while (a[len] != '\0')
	{
		len++;
	}
	int i = 0;
	while (b[i] != '\0')
	{
		a[len+i] = b[i];
		i++;
	}
	puts(a);
}
