#include<stdio.h>
int main()
{
  int j,i,a=1,n,b=2;
  printf("Enter the number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=0;j<=(n-i)*2;j++)
    {
      printf(" ");
    }
    if(a==1)
    {
      printf("%d\n",a);
      a++;
    }
    else
    {
      for(j=1;j<=b;j++)
      {
        printf("%d",a);
        printf("   ");
        a++;
      }
      b++;
      printf("\n");
    }
  }
  printf("\n");
}
