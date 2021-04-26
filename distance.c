#include<stdio.h>
#include<math.h>
int main()
{
  printf("###################################\n");
  int z=0;
  do
  {
    float l1,l2,g1,g2,D,PI=3.141592;
    printf("Enter first latitude & longitude(L1, g1) in degree\n");
    scanf("%f%f", &l1, &l2);
    printf("Enter second latitude & longitude(l2, g2) in degree\n");
    scanf("%f%f", &g1, &g2);
    l1 = l1*( PI / 180.0 );
    l2 = l2*( PI / 180.0 );
    g1 = g1*( PI / 180.0 );
    g2 = g2*( PI / 180.0 );
    D = 3963 * acos( sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1) );
    printf("Distance in nautical miles is %f\n", D);
    printf("###################################\n");
  }
  while(z<1);
}
