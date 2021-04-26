#include<stdio.h>
int main()
{
  printf("##########################################\n");
  int z=0;
  do
  {
    int c,s,a;
    printf("Enter the cost price in rupees: ");
    scanf("%d",&c);
    printf("Enter the selling price rupees: ");
    scanf("%d",&s);
    a=s-c;
    if(a>0)
    {
      printf("You made profit of %d rupees\n",a);
    }
    else if(a==0)
    {
      printf("You had niether profit nor incurred loss\n");
    }
    else
    {
      printf("You made an incurred loss of %d rupees\n",-1*a);
    }
    printf("##########################################\n");
  }
  while(z<1);
}
