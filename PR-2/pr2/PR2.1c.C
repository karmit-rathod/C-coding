#include<stdio.h>
#include<conio.h>

main()
{ in
  clrscr();









   getch();
}     #include<stdio.h>
#include<conio.h>

main()
{ int t;
  clrscr();

  printf("Enter Your School Marks :");
  scanf("%d",&t);

  (t>=91 && t<=100)
	 ?printf("Gread a")
	 :
	   (t>=81 && t<=90)
			   ?printf("Gread b")
			   :
			     (t>71 && t<=80)
					    ?printf("Gread c")
					    :
					     (t>61 && t<=70)
							   ?printf("Gread d")
							   :
							     (t>51 && t<=60)
									    ?printf("Gread e")
									    :printf("You are fail");

  getch();
}