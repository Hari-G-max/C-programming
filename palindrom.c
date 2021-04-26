#include<stdio.h>
int main()
{
  printf("*****************************************\n");
  int z=1;
  do
  {
    int n,b,rem,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    b=n;
    while(b>0)
    {
      rem=b%10;
      rev=rev*10+rem;
      b=b/10;
    }
    if(n==rev)
    {
      printf("given number is a palindromic number\n\n");
    }
    else
    {
      printf("given number is not a palindromic number\n\n");
    }
  }
  while(z<20);
  
}
