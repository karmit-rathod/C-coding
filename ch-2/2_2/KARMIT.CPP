#include<stdio.h>
#include<conio.h>

main()
{
  int r;
  const float pi = 3.14;
  printf("Enter thevalue of r:");
  scanf("%d",&r);
  printf("the radius of circle :");
  printf("%f* %d =%.@f",pi,r,r,pi*r*r);
  getch();
}