#inlcude<stdio.h>
main()
{
	int size,i;
	
	printf("enter the size of array:");
	scanf("%d",&size);
	
	int a[size],b[size],sum[size];
	printf("\n\nAarray 2\n\n");
	
	for(i=0;i<size;i++)
	{
	  printf("enter a[%d] :",i);
	  scanf("%d",&a[i]);
	}
	printf("\n\narray 2\n\n");
	for(i=0;i<size;i++)
	{
		printf("entar b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<size;i++) sum[i]=a[i]+b[i];
	for(i=0;i<size;i++)
	{
		printf("sum[%d]: %d\n",i,sum[i]);
	}
}


