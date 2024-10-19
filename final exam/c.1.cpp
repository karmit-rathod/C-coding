#include<stdio.h>

mani()
{
	int Size, i, a[10];
    int Even Count = 0, Odd Count = 0;
 
   printf("\n Please Enter the Size of an Array :  ");
   scanf("%d", &Size);
 
   printf("\nPlease Enter the Array Elements\n");
   for(i = 0; i < Size; i++)
 {
   scanf("%d", &a[i]);
 }
  
   for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
     Even Count++;
   }
   else
   {
     Odd_Count++;
   }
 }
  
}
