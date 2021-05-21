#include<stdio.h>
int main()
{
  char a[50][50];
  int n,i,j;
  printf("Enter the number of word: ");
  scanf("%d",&n);
  printf("Enter the words: ");
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=n;j++)
    {
      scanf("%s",&a[i][j]);
    }
  }
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=n;j++)
    {
      printf("%s",&a[i][j]);
    }
  }
}
