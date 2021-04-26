#include<stdio.h>
void main()
{
  int n=1,i,sum,count=0;
  while(count<5)
  {
    i=1;
    sum=0;
    while(i<n)
    {
      if(n%i==0)
      {
        sum=sum+i;
      }
      i=i+1;
    }
    if(sum==n)
    {
      printf("%d\n",n);
      count++;
    }
    n++;

  }

}
