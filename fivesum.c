#include<stdio.h>
void main()
{
  int z=0;
  do
  {
    int a,b,s,e=0;
    printf("Enter your first five digit number: ");
    scanf("%d",&a);
    printf("Enter the second five digit number: ");
    scanf("%d",&b);
    s=a+b;
    while(a && b >0)
    {
      a=a/10;
      b=b/10;
      e++;
    }
    if(e!=5)
    {
      printf("giver number is not a five digit number\n\n");
    }
    else
    {
      printf("%d\n\n",s);
    }
  }
  while(z<3);
}
