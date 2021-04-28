#include<stdio.h>
int main()
{
  printf("######################################\n");
  int z=0;
  do
  {
    printf("if you want to exit press 0\n");
    int n,i,a,flag=0,j;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("the prime numbers under %d = ",n);
    if(n==0)
    {
      break;
    }
    for(i=1;i<=n;i++)
    {
      for(j=2;i<=i/2;j++)
      {
        a=n%i;
        if(a==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
      {
        if(i==1)
        {

        }
        else
        {
          printf("%d  ",i);
        }
      }
    }
    printf("\n");
  }
  while(z<1);
  printf("######################################\n");
}
