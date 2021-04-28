#include<stdio.h>
int main()
{
  int z=0;
  do
  {
    int a[10][10],b[10][10],c[10][10],n,m,i,j,s[10][10];
    printf("Enter the order of the two matrices: ");
    scanf("%d%d",&n,&m);
    if(n<=10 && m<=10)
    {
      printf("Enter the numbers: ");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
      }
      printf("Enter the numbers: ");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          scanf("%d",&b[i][j]);
        }
      }
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          s[i][j]=a[i][j]+b[i][j];
          c[i][j]=a[i][j]-b[i][j];
        }
      }
      printf(" sum = ");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          printf("%d\t",s[i][j]);
        }
        printf("\n       ");
      }
      printf(" \n substraction = ");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          printf("%d\t",c[i][j]);
        }
        printf("\n                ");
      }
    }
    else
    {
      printf("Please enter order less than or equal to 10");
    }
    printf("\n");
  }
  while(z<1);

}
