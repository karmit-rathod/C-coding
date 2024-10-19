#include<stdio.h>

  int main()
{
  
  	float Unit Price, Sales Amount, Amount;
 
  	printf("\n Please Enter the Actrual Product Cost : ");
  	scanf("%f", &Unit Price);
  
  	printf("\n Please Enter the Sale Price (or Selling Price) :  ");
  	scanf("%f", &Sales Amount);
  
  	if (Sales Amount > Unit Price)
  	{
  		Amount = Sales Amount - Unit Price;
  		printf("\n Profit Amount  =  %.4f", Amount);
  	}
  	else if(Unit Price > Sales Amount)
    {
    	Amount = Unit Price - Sales Amount;
  		printf("\n Loss Amount  =  %.4f", Amount);
	}
  	else
    	printf("\n No Profit No Loss!");
 
    return 0;
  

}
