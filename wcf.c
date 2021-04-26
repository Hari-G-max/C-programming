#include<stdio.h>
#include<math.h>
int main()
{
  float wcf,v,t;
  printf("Enter the wind velocity: ");
  scanf("%f",&v);
  printf("Enter the air temparature: ");
  scanf("%f",&t);
  wcf=35.74+(6215*t)+((0.4275*t)-35.74)*pow(v,0.16);
  printf("%f\n",wcf);
}
