#include <stdio.h>

struct student
{
	char name[20];
	int age;
	int number;
	char major[20];
};
void print_all(struct student *p,int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%s - %d - %d - %s\n",(p+i)->name,(p+i)->age,(p+i)->number,(p+i)->major);
	return ;
}
int main()
{
	struct student s[3] = {{"xiaoming",21,1001,"jisuanji"},{"xiaohong",32,1002,"android"},{"zhangsan",33,1003,"linux"}};
	print_all(s,3);
	return 0;
}
