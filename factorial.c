#include<stdio.h>
void main()
{
  int n,i,fact;
  printf("Enter the number: ");
  scanf("%d",&n);
  i=1;
  fact=1;
  printf("1*");
  while(i<n)
  {
    fact=fact*i;
    i=i+1;
    if(i<n)
    {
      printf("%d*",i);
    }
    else
    {
      printf("%d",n);
    }
  }
  printf("=");
  fact=fact*n;
  printf("%d\n",fact);

}
