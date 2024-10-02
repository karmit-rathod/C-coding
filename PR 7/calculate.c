#include<stdio.h>
// Udf
float add ( float a,float b){
	
	return a+b;
	
}
float sub ( float a,float b){
	
	return a-b;
	
}
float mul ( float a,float b){
	
	return a*b;
	
}
float div ( float a,float b){
	
	return a/b;
	
}
float mod ( int  a, int  b){
	
	return a%b;
	
}
main()
{
	
	


	
	float a,b;
	int n;
	char choice;
	
	do
{
	printf("Press  + Adition\n");
	printf("Press  - Subtraction\n");
	printf("Press * Multipecation\n");
	printf("Press / Division\n");
	printf("Press %%  mudulus\n");
	printf("Press 0 to end");
	
	printf("Enter any number 1 :");
	scanf("%f",&a);
	
	printf("Enter any number 2 :");
	scanf("%f",&b);
	

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &choice);
        
	
	switch(choice)
	{
		case '+' : add (a,b);
		           printf("%.2f + %.2f = %.2f",a,b,a+b);
		break;
		
		case '-' : sub (a,b);
		        printf("%.2f - %.2f = %.2f",a,b,a-b);
		break;
		
		case '*' : mul (a,b);
		break;     printf("%.2f * %.2f = %.2f",a,b,a*b);
		
		
		case '/':  div (a,b);
		          printf("%.2f / %.2f = %.2f",a,b,a/b);
		break;
		            
		  
		
		case '%' : mod (a,b);
	            if (b != 0) {
                    a = (int)a % (int)b;
                    printf("%d %% %d = %d",a,b,a);
                } else {
                    printf("Error: Division by zero\n");
                    
                }	
		
		break;
		
		default : choice=0;
		 
		break;
		
		
   
    
		
	}

    
        
		printf("\n\n");
	
   }while(choice !=0 );
	

	
	
	
}
