#include<stdio.h>
main()
{
	int a=0;
	int b=0;
	a=1;
	while(a<=6)
	{
		b=1;
		while(b<=a)
		{
			printf("01");
			b++;
		}
		printf("\n");
		a++;
	}
}
