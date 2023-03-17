#include <stdio.h>
#include <string.h>

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
void print_student(struct student *p)
{
	printf("%9s - %d - %d - %s\n",p->name,p->age,p->number,p->major);
	return ;
}
void print_name(struct student *p, int n, char *name)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(strcmp(p[i].name,name) == 0 )
			print_student(p+i);
	}
	return ;
}
int main()
{
	struct student s[3] = {{"xiaoming",21,1001,"jisuanji"},{"xiaohong",32,1002,"android"},{"zhangsan",33,1003,"linux"}};
	char name[20];
	print_all(s,3);
	puts("input:");
	scanf("%s",name);
	print_name(s,3,name);
	return 0;
}


/*测试vscode 的 git
	token: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
	*/
