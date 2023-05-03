#include<stdio.h>

main()

{
	int a[100][100];
	int i,j,r,c,n;
	
	printf("Enter Row size=");
	scanf("%d",&r);
	printf("Enter Column size=");
	scanf("%d",&c);
	printf("Enter Array Element=\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
