#include<stdio.h>
int main()
{
  int z=0;
  do
  {
    int n,rev=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
    printf("reverse of the given number = %d\n",rev);
  }
  while(z<1);
}
