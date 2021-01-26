#include <stdio.h>

struct data
{
	int year;
	int month;
	int day;
};
struct ID_CARD
{
	char name[20];
	char gender[10];
	struct data brithday;	
};
void set_id(struct ID_CARD *p)
{
	scanf("%s%d%d%d%s",p->name,&p->brithday.year,&p->brithday.month,&p->brithday.day,p->gender);		
	return ;	
}
int main()
{
	struct ID_CARD id = {"yuchi","male",{1998,10,9}};
	set_id(&id);
	printf("%s  %d-%d-%d  %s\n",id.name,id.brithday.year,id.brithday.month,id.brithday.day,id.gender);
}
