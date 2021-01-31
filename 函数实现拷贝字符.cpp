#include <stdio.h>

char *my_cpy(char *dest,char *src)
{
	char *dst = dest;
	while(*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';
	return dst;
}

int main()
{
	char a[] = "hello world";
	char b[20] = {0};
	printf("%s\n",my_cpy(b,a));
	return 0;	
} 
