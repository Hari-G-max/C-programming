//finding leap year or not using conditional operation//
#include <stdio.h>  
int main()  
{  
	int z=0;
	do
	{
	   int a;
	   printf("Enter the year: ");
	   scanf("%d",&a);
	   a=((a%4==0 && a%100!=0)?(printf("Leap year\n")):(a=((a%400==0)?(printf("Leap year\n")):(printf("Not a leap year\n")))));
	}
	while(z<1);
}