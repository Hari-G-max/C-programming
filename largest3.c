//find the largest number among the three//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater number\n",a);
	}
	if(b>a && b>c)
	{
		printf("%d is greater number\n",b);
	}
	if(c>b && c>a)
	{
		printf("%d is greater number\n",c);
	}
}