#include<stdio.h>

int main()

{
	int a ;
	
	printf("Enter your marks : ");
	scanf("%d",&a);
	
	if (a>=90 && a<=100)
		printf("O Grade");
	
	else if (a>=80 && a<=89)
		printf("E Grade");
	
	else if (a>=70 && a<=79)
		printf("A Grade");
	
	else if (a>=60 && a<=69)
		printf("B Grade");
		
	else if (a>=50 && a<=59)
		printf("C Grade");
	
	else
		printf("Fail");			
}