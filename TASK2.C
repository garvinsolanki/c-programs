#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,max;
	clrscr();
	printf("enter array size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("largest number=%d",max);
	getch();
}