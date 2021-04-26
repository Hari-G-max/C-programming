#include<stdio.h>
int main()
{
  int z=0;
  do
  {
    int a,i,b;
    printf("Enter your number: ");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
      b=i*i*i;
      if(a==b)
      {
        printf("Given number is perfect cube\n");
        printf("The cube root of %d is %d\n",a,i);
        i=a;
      }
      else if(i==a)
      {
        printf("Given number is not a perfect cube\n");
        i=a;
      }
    }
  }
  while(z<1);
}
