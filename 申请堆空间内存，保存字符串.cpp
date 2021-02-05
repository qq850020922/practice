#include <stdio.h>
#include <stdlib.h> 
int main()
{
	int n;
	puts("input:n");
	scanf("%d",&n);
	char *p = malloc(n*sizeof(char));
	if(NULL == p)
		return 0;
	gets(p);
	puts(p);
	free(p);
	return 0;
}
