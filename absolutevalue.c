#include<stdio.h>
void main()
{
  int n;
  printf("Enter value: ");
  scanf("%d",&n);
  if(n<=0)
  {
    printf("absolute value : %d\n",-1*n);
  }
  else
  {
    printf("absolute value : %d\n",n);
  }
}
