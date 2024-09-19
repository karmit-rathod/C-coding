#include<stdio.h>
main()
{
	int row,column;
	int i,j;
	printf("enter row size :");
	scanf("%d",&row);
	printf("enter row column:");
	scanf("%d",&column);
	
	int a[row][column];
	
	for (i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d",a[j][i]);
		}
			printf("\n");
	}

}
