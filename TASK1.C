#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("entera,b&c=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("largest number=%d",a);
		}
		else
		{
			printf("largest number=%d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("largest number=%d",b);
		}
		else
		{
			printf("largest number=%d",c);
		}
	}
	getch();
}