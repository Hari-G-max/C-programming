#include<stdio.h>
int main()
{
  int z=0;
  do
  {
    int n,a,b,c,d,e;
    printf("#############################\npress 0 to exit\n");
    printf("Enter the amount: ");
    scanf("%d",&n);
    if(n>0)
    {
      printf("%d=",n);
      a=n/100;
      if(a>1)
      {
        printf("%dx100",a);
        n=n-(a*100);
      }
      b=n/50;
      if(b>1)
      {
        printf("+%dx50",b);
        n=n-(b*50);
      }
      c=n/10;
      if(c>1)
      {
        printf("+%dx10",c);
        n=n-(c*10);
      }
      d=n/5;
      if(d>1)
      {
        printf("+%dx5",d);
        n=n-(d*5);
      }
      e=n/1;
      if(e>1)
      {
        printf("+%dx1",e);
      }
    }
    else if(n==0)
    {
      z=2;
    }
    else
    {
      printf("invalid amount");
    }
    printf("\n#############################\n");
  }
  while(z<2);
}
