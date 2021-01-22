#include <stdio.h>
#include <math.h>
int main()
{
/*	int a,b,c;
//1. while实现
	int n = 100;
	while (n<1000)
	{
		a = n / 100;
		b = n /10 % 10;
		c = n % 10;
		if (n == a*a*a + b*b*b + c*c*c)
			printf ("%d\n",n);
		n++;
	} 
*/

//2. 用do while实现
/*	int a,b,c;
	int n = 100;
	do
	{
		a = n / 100;
		b = n /10 % 10;
		c = n % 10;
		if (n == a*a*a + b*b*b + c*c*c)
			printf ("%d\n",n);
		n++;		
	} while (n<1000);
}
*/
//  3.用for实现

/*
   int a,b,c,n;
   
   for (n=100; n<1000; n++)
   {
		a = n / 100;
		b = n /10 % 10;
		c = n % 10;
		if (n == a*a*a + b*b*b + c*c*c)
			printf ("%d\n",n); 		
   }
}
*/
//4.用goto实现
	int a,b,c;
	int n = 100;
	
loop:	
		if(n < 1000)
		{
			a = n / 100;
			b = n /10 % 10;
			c = n % 10;
			if (n == a*a*a + b*b*b + c*c*c)
				printf ("%d\n",n); 	
			n++;
			goto loop;
		}
}
 
