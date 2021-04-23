#include<stdio.h>
void main()
{
  int z=0;
  do
  {
    int a,b=0,d,c,e=0;
    printf("Enter your five digit number: ");
    scanf("%d",&a);
    d=a;
    while(a>0)
    {
      d=a%10;
      c=b*10+d;
      b=c;
      a=a/10;
      e++;
    }
    if(e!=5)
    {
      printf("giver number is not a five digit number\n\n");
    }
    else
    {
      printf("%d\n\n",c);
    }
  }
  while(z<3);
}
