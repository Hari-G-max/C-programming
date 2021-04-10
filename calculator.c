#include<stdio.h>
int main()
{
  printf("   CALCULATOR   \n");
  printf("-----------------");
  int z;
  do
  {
    printf("\n*********************************************************\n");
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Divition\n5.exit\n");
    int n;
    float a,b,s,p,r,q;
    printf("Enter your choice: ");
    scanf("%d",&n);
    if(0<n && n<5)
    {
      printf("Enter your first number: ");
      scanf("%f",&a);
      printf("Enter your second number: ");
      scanf("%f",&b);
    }
    else
    {
      printf("\n*********************************************************\n");
    }

    switch(n)
    {
      case 1:
        s=a+b;
        printf("ans=%f\n",s);
        break;
      case 2:
        p=a-b;
        printf("ans=%f\n",p);
        break;
      case 3:
        q=a*b;
        printf("ans=%f\n",q);
        break;
      case 4:
        r=a/b;
        printf("ans=%f\n",r);
        break;
      case 5:
        n=-1;
        z=20;
        break;
      default:
        printf("INVALID CHOICE\n");
        n=-1;
        break;
      }
    z++;
  }
  while(z<20);
}
