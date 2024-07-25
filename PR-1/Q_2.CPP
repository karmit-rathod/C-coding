#include<stdio.h>
#include<conio.h>
main()
{
   int salary;
   int HRA=10;
   int DA=5;
   int TA=8;
   int gross_salary;

   clrscr();
   printf("Base salary :");
   scanf("%d",& salary);
   gross_salary=salary+(salary*HRA/100)+(salary*DA/100)+(salary*TA/100);
   printf("gross_salary\t : %d",gross_salary);
   getch();
}