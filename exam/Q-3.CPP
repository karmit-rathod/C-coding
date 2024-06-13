#include<stdio.h>
#inciude<conio.h>

main()
{
  int a;
  int b;
  int ans;
  clrscr();
  printf("Enter the first angle a:"):
  scanf("%d",&a);
  printf("Enter the second angle b:");
  scanf("%d",&b);
  ans = 180 - (a+b);
  printf("%d",ans);
  getch();



}