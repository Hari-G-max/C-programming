//BMI finder//
#include<stdio.h>
int main()
{
	float w,h,BMI;
	printf("Enter the weight(in kg) and height(m): ");
	scanf("%f%f",&w,&h);
	BMI=w/(h*h);
	printf("BMI = %f\n",BMI);
	if(BMI<=15) 
	{
		printf("starvation\n");
	}
	if(BMI<=17.5 && BMI>=15.1) 
	{
		printf("anorexic\n");
	}
	if(BMI<=18.5 && BMI>=17.6) 
	{
		printf("underweight\n");
	}
	if(BMI<=24.9 && BMI>=18.6) 
	{
		printf("ideal\n");
	}
	if(BMI<=25.9 && BMI>=25) 
	{
		printf("overweight\n");
	}
	if(BMI=30.9 && BMI>=30) 
	{
		printf("obese\n");
	}
	if(BMI>=40) 
	{
		printf("morbidly obese\n");
	}

}