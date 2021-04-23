#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter ther first value: ");
  scanf("%d",&a);
  printf("Enter the second value: ");
  scanf("%d",&b);
  printf("a=%d\nb=%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("the interchanged value of are \na=%d\nb=%d\n",a,b);
}
