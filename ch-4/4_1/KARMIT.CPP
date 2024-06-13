#include<stdio.h>
#include<conio.h>
main()
{
  int x,y;
  int ans;
  clrscr();
  printf("Enter the first number:");
  scanf("%d",&x);
  printf("Enter the secound number:");
  scanf("%d",&y);
  printf("\n \n");
  ans =(x*x)+(2*x*y)+(y*y);
  printf("ans = %d",ans);
  getch();
}
