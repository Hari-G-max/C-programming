#include<stdio.h>
int main()
{
  int a=0;
  do
  {
        int y;
        printf("Enter the year: ");
        scanf("%d",&y);
        if(y%100==0)
        {
          if(y%400==0)
          {
            printf("LEAP YEAR\n");
          }
          else
          {
            printf("NOT A LEAP YEAR\n");
          }
        }
        else
        {
          if(y%4==0)
          {
            printf("LEAP YEAR\n");
          }
          else
          {
            printf("NOT A LEAP YEAR\n");
          }
        }
        a=a+1;
   }
   while(a<20);
   return 0;


}
