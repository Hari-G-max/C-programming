#include<stdio.h>
void main()
{
  int i,j,k,c=0,e;
  printf("How many numbers are you entering:-");
  scanf("%d",&e);
  int a[e];
  printf("Enter the numbers: ");
  for(i=1;i<=e;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=e;i++)
  {
    for(j=i+1;j<=e;j++)
    {
      if(a[i]>a[j])
      {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
      }
    }
    printf("%d\t",a[i]);
  }
  printf("\n");
}
