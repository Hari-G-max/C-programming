#include<stdio.h>
void main()
{
  int x,y;
  printf("Enter the cordinates(x,y): ");
  scanf("%d%d",&x,&y);
  if(x==0)
  {
    if(y==0)
    {
      printf("cordinates (%d,%d) lies on origin",x,y);
    }
    else
    {
      printf("Given cordinates (%d,%d) lies on Y axis",x,y);
    }
  }
  else if(y==0)
  {
    printf("Given cordinates (%d,%d) lies on X axis",x,y);
  }
  else
  {
    printf("Given cordinates (%d,%d) lies on niether X axis nor Y axis",x,y);
  }
  printf("\n");
}
