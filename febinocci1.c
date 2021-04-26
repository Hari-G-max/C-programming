#include<stdio.h>
int main()
{
  int z=0;
  do
  {
    int n,i=1,b=1,a=0,N;
    printf("Enter the number: ");
    scanf("%d",&N);
    while(i<=1836311903)
    {
      n=a+b;
      a=b;
      b=n;
      if(N==a)
      {
        printf("it is a febinocci number\n");
        i=1836311904;
      }
      else
      {
        i++;
        if(i==1836311903)
        {
          printf("it is not a febinocci number\n");
        }
      }
    }
    z++;
  }
  while(z<20);
  return 0;
}
