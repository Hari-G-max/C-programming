#include<stdio.h>
#include<math.h>
int main()
{
  int z=1;
  do
  {
    int a,b,c;
    float l=.5,k,x1,x2,m;
    printf("##########################################################\n\n");
    printf("Enter the coeficiant of x^2: ");
    scanf("%d",&a);
    printf("Enter the coeficiant of X: ");
    scanf("%d",&b);
    printf("Enter the constent: ");
    scanf("%d",&c);
    k=pow(pow(b,2)-4*a*c,l);
    m=pow(b,2)-4*a*c;
    if(m<0)
    {
      printf("there is no solution in real value,sorry\n\n");
    }
    else
    {
      b=-1*b;
      x1=b+k;
      x2=b-k;
      x1=x1/2;
      x1=x1/a;
      x2=x2/2;
      x2=x2/a;
      printf("the value of the quadratic equations are %f & %f\n\n",x1,x2);
    }
    printf("##########################################################\n");
    z++;
  }
  while(z<20);
  return 0;

}
