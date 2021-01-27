#include <stdio.h>

char *my_cat(char *dest, char *src)
{
	char *dst = dest;
	while(*dest != '\0')
		dest++;
	
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dst;
}

int main()
{
	char a[20] = "hello ";
	char b[] = "world";
	printf("%s\n",my_cat(a,b));
	
	return 0;
}
