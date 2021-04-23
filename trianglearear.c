#include<stdio.h>
#include<math.h>
void main()
{
  int z=0;
  do
  {
    float a,b,c,x,s;
    printf("Enter the length of first side: ");
    scanf("%f",&a);
    printf("Enter the length of second side: ");
    scanf("%f",&b);
    printf("Enter the length of third side: ");
    scanf("%f",&c);
    if(a && b && c >= 0)
    {
      s=a+b+c;
      s=s/2;
      x=s*(s-a)*(s-b)*(s-c);
      printf("area of the triangle is : %f\n",sqrt(x));
    }
    else
    {
      printf("there is not exist a triangle with these measures\n");
    }
    z++;
    }
    while(z<20);


}
