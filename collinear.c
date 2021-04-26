//programe to find 3 points are collinear//
#include<stdio.h>
int main()
{
  printf("###########################################\n");
  int z=0;
  do
  {
    float X1,Y1,X2,Y2,X3,Y3,AB,BC,AC;
    printf("Enter the first points (x1,y1)\n\t: ");
    scanf("%f%f",&X1,&Y1);
    printf("AB=(%f,%f)\n",X1,Y1);
    printf("Enter the second points (x2,y2)\n\t: ");
    scanf("%f%f",&X2,&Y2);
    printf("BC=(%f,%f)\n",X2,Y2);
    printf("Enter the third three points (x3,y3)\n\t: ");
    scanf("%f%f",&X3,&Y3);
    printf("AC=(%f,%f)\n",X3,Y3);
    AB=(Y2-Y1)/(X2-X1);
    BC=(Y3-Y2)/(X3-X2);
    AC=(Y3-Y1)/(X3-X1);
    printf("Slope of AB =%f\n",AB);
    printf("Slope of BC =%f\n",BC);
    printf("Slope of AC =%f\n",AC);
    if(AB==BC && BC==AC)
    {
      printf("The three points are on a straight line\n");
    }
    else
    {
      printf("The three points are not on a straight line\n");
    }
    printf("###########################################\n");
  }
  while(z<1);
}
