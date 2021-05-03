#include <stdio.h>

int main (void)
{
  char choice;
  int a,b;

  do
  {
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d",a,b,a+b);
    printf("\ndo you want to continue(y/n): ");
    scanf(" %c",&choice);
  }
  while(choice=='y');
  return 0;
}
