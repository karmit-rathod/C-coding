#include<stdio.h>
#include<conio.h>
main()
{
  int a=10,b=20;
  clrscr();
  printf("befor swaping:\n");
  printf("a=10 \n b=20");
  printf("\n\n");
  printf("After swaping :\n");
  a=a*b;
  b=a/b;
  a=a/b;
  printf("a=%d \n b=%d",a,b);
  getch();

}