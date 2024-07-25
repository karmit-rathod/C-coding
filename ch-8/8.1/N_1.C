#include<stdio.h>
#include<conio.h>

main()

{
   int n,a=1;
   clrscr();

   printf("Enter any number:");
   scanf("%d",&n);

   while(n>=a)
   {
     printf("%d\t",n);
     n--;
   }
  getch();
}