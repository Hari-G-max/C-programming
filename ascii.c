#include<stdio.h>
int main()
{
	int i;
	char a=0;
	for(i=1;i<=128;i++)
	{
		printf("%3d = %c\t\t\t",a,a);
		a++;
	}
}