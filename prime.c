#include<stdio.h>
int main()
{
  printf("######################################\n");
  int z=0;
  do
  {
    printf("if you want to exit press 0\n");
    int n,flag=0,j;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
      break;
    }
    for(j=2;j<=n/2;j++)
    {
      if(n%j==0)
      {
        flag=1;
        printf("Given number is not prime number");
        break;
      }
    }
    if(flag==0)
    {
      if(n==1)
      {
        printf("Given number is not prime number");
      }
      else
      {
        printf("Given number is prime number");
      }
    }
    printf("\n");
  }
  while(z<1);
  printf("######################################\n");
}
