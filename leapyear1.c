#include<stdio.h>
int main()
{
	int z=0;
	do
	{
		int year;
		printf("Enter the year: ");
		scanf("%d",&year);
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("The entered year is a leap year\n");
		}
		else
		{
			printf("The entered year is not a leap year\n");
		}
		
	}
	while(z<1);
}