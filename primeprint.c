#include<stdio.h>
void main()
{
  int z=0;
  do
  {
    int  i=1,n,p=2,count,flag;
    printf("Enter the number : ");
    scanf("%d",&n) ;
    printf("First %d prime numbers are : ",n);
    while(i<=n)
    {
      flag=1;
      for(count=2;count<=p-1;count++)
      {
        if(p%count==0)
        {
          flag=0;
          break;
        }
      }
      if(flag==1)
      {
        printf("%d ",p);
        i++;
      }
      p++;
    }
    printf("\n");
  }
  while(z<2);
}
