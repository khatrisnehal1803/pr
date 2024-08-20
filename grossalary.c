#include<stdio.h>
#include<conio.h>

main()
{
	int salary=100, hra=10 , da=5 ,ta=8;
	int grossalary;
	
	printf("enter base salaty\n");
	
	printf("enter hra percentage\n");
	
	printf("enter da percentage\n");
	
	printf("enter ta percentage\n");
	
	hra=(hra*salary)/100;
	da=(da*salary)/100;
	ta=(ta*salary)/100;
	
	grossalary=salary+hra+da+ta;
	printf("grossalary :%d\n",grossalary);
	
}