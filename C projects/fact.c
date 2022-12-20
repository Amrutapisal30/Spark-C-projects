#include<stdio.h>
//without return type without parameter
void cube();
void fact();
int side,area,i,n,f=1;
main()
{
	cube();
	fact();
}
void cube()
{
	printf("\n enter side= ");
	scanf("%d",&side);
	area=6*side*side;
	printf("\n area of cube=%d",area);
}
void fact()
{
	printf("\n enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("\n factorial =%d",f);
	
	}
