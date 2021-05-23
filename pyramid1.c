#include<stdio.h>
int main()
{
	char a=65;
	int i,j,n,k=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%c",a);
			a++;
		}
		a=65;	
		k++;
		printf("\n");
	}
	
}