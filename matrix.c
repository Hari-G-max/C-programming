#include<stdio.h>
int main()
{
  int n,m,a[10][10],i,j;
  printf("Enter the order of the matrix: ");
  scanf("%d%d",&m,&n);
  if(m<=10 && n<=10)
  {
    printf("Enter the numbers: ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Please enter order less than or equal to 10");
  }
}
