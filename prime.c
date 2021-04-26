#include<stdio.h>
int main()
{
  printf("######################################\n");
  int z=0;
  do
  {
    int n,i,a,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      a=n/i;
      if(a*i==n)
      {
        c++;
      }
    }
    if(c==2)
    {
      printf("The number %d is a prime number\n\n",n);
    }
    else
    {
      printf("The number %d is not a prime number\n\n",n);
    }
  }
  while(z<1);
  printf("######################################\n");
}
