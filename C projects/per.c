
#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,sum,per;
	printf("\n enter 5 subjects marks=");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("\n sum=%d",sum);
	per=(sum*100)/500;
	printf("\n per=%d",per);
	if(per>=75 && per<=100)
	{
		printf("\n distinction");
	}
	else if(per>=60 && per<75)
	{
		printf("\n first class");
	}
	else if(per>=50 && per<60)
	{
		printf("\n 2nd class");
	}
	else if(per>=40)
	{
		printf("\n pass");
	}
	else
	{
		printf("\n fail");
	}
}

