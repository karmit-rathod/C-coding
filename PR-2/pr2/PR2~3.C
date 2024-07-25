#include<stdio.h>
#include<conio.h>

main()
{ int t;
  char GRADE;
  clrscr();

  printf("Enter Your School Marks :");
  scanf("%d",&t);

if  (t>=91 && t<=100)
       {	 GRADE='A';
	 }
     else if	   (t>=81 && t<=90)
			  { GRADE='B';
			   }
			    else if (t>71 && t<=80)
					   { GRADE='C';
					    }
					 else if    (t>61 && t<=70)
							  { GRADE='D';
							   }
							 else if     (t>51 && t<=60)
									   { GRADE='E';
									    }

							  else
							  {GRADE='F';}






		switch(GRADE)
		 {
		  case 'A': printf("GRADE=A\n");
			   printf("Excellent");
			   break;
		  case 'B':
			   printf("GRADE=B\n");
			   printf("Well done");
			   break;
		  case 'C':
			   printf("GRADE=C\n");
			   printf("Good job");
			   break;

		  case 'D':
			   printf("GRADE=D\n");
			   printf("You Passed");
			   break;

		  case 'E':
			   printf("GRADE=E\n");
			   printf("Passed ");
			   break;

		  case 'F':
			   printf("GRADE=F\n");
			   printf("Sorry,you failed");
			   break;

		 }
	    if(GRADE>='A' && GRADE<= 'B')
	    {printf( " You are eligible for the next level");
	    }

	    else
	    {printf("Please try again next time");
	    }
		getch();
	      }