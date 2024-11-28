#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b)
	{
		printf("the value a is smallest");
	}
	else if(b<c)
	{
		printf("the value b is smallest");
	}
	else if(c<a)
	{
		printf("the value c");
	}
	else
	{
		printf ("other");
	}
	 return 0;
}

	

