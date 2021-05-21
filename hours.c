#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=12;i++)
  {
    printf("%2d.00 AM\n",i);
    if(i==12)
    {
      printf("%2d.00 Noon\n",i);
      for(i=1;i<=12;i++)
      {
        printf("%2d.00 PM\n",i);
        if(i==12)
        {
          printf("%2d.00 Midnight\n",i);
        }
      }
    }
  }
}
