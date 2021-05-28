#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter the number: ");
  scanf("%d",&n);
  for(i=1;i<=(2*n)-2;i++)
  {
    printf(" ");
  }
  printf("&\n");
  for(i=n-2;i>=1;i--)
  {
    for(j=3;j<=(i*2)+2;j++)
    {
      printf(" ");
    }
    printf("&");
    for(j=1;j<=(n-1)-i;j++)
    {
      printf(" ");
    }
    for(j=1;j<=(((3*n)-3)-(3*i))-1;j++)
    {
      printf(" ");
    }
    printf("&\n");
  }
  for(i=1;i<=(2*n)-1;i++)
  {
    printf("& ");
  }
  printf("\n");
}
