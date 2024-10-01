#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(i*j)
			{
				printf(" %d ",5*j);
			}
			else
			{
				printf("%d");
			}
		}
		printf("\n");
	}
}
