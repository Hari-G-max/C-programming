#include<stdio.h>
int main()
{
  int p=100000;
  int i;
  for(i=2020;i>=2010;i--)
  {
    p=(p*10/11);
    printf("population in %d year is %f\n",i,p);
  }
}
