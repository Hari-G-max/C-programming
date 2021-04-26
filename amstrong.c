#include<stdio.h>
#include<math.h>
int main()
{
  int a=0;
  do
  {
      int n,count=0,N,d,ncopy,sum=0;
      printf("Enter the number: ");
      scanf("%d",&n);
      N=n;
      ncopy=n;
      while(n>0)
      {
        n=n/10;
        count++;
      }
      while(N>0)
      {
        d=N%10;
        sum = sum + pow(d,count);
        N=N/10;
      }
      if(sum==ncopy)
      {
        printf("given number is amstrong number\n");
      }
      else
      {
        printf("given number is not a amstrong number\n");
      }
      a++;
  }
  while(a<20);
  return 0;
}
