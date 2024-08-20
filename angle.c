#include<stdio.h>
#include<conio.h>

main()
{
	int angel11,angel12,angel13;
	
	printf("enter angel1 :");
	scanf("%d",&angel11);
	
	printf("enter angel2 :");
	scanf("%d",&angel12);
	
	angel13=180-angel11-angel12;
	
	printf("third angel is=%d",angel13);
}