//to find a triangle is isosceles, equilateral or right angled by their sides//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangles: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && a==c)
	{
		printf("The triangle is equilateral\n");
	}
	else if(a==c || a==b || c==b)
	{
		printf("The triangle is isosceles\n");
	}
	else if( (a*a)+(b*b)==c*c || (c*c)+(b*b)==a*a || (a*a)+(c*c)==b*b )
	{
		printf("The triangle is right angled\n");
	}
	else
	{
		printf("Invalid triangle/other\n");
	}
}