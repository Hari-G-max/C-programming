#include<stdio.h>
int main()
{
  int i,j,n,k;
  printf("Enter the number: ");
  scanf("%d",&n);
  for(j=2;j<=(n*2);j=j+2)
  {
    for(k=2;k<=j;k=k+2)
    {
      printf(" \t");
    }
    for(i=j;i<=(n*2);i++)
    {
      printf("&\t");
    }
    printf("\n");
  }
}
