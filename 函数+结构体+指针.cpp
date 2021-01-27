#include <stdio.h>

struct student
{
	char name[100];
	int age;
	int number;
	char major[100];
};
set_info(struct student *p)
{
	scanf("%s%d%d%s",p->name,&p->age,&p->number,p->major);
}
print_info(struct student s)
{
	printf("%s - %d -%d -%s\n",s.name,s.age,s.number,s.major);
}
int main()
{
	struct student s;
	puts("name age number major");
	set_info(&s);
	print_info(s);
}
