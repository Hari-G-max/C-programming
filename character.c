//Determine entered character is capital,small.digit,special//
#include<stdio.h>
int main()
{
	char a;
	printf("Enter the character: ");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		printf("The given character is capital letter\n");
	}
	else if(a>=97 && a<=122)
	{
		printf("The given character is small letter\n");
	}
	else if(a>=48 && a<=57)
	{
		printf("The given character is digit\n");
	}
	else
	{
		printf("The given character is special symbol\n");
	}
}