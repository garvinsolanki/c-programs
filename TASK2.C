#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n;
	clrscr();
	printf("enter array size=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	getch();
}