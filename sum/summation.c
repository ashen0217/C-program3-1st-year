#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int number,sum = 0,count = 0;
	while(count<10)
	{
	printf("Enter the Number: ");
	scanf("%d", &number);
	
	sum = sum + number;
	count = count+1;	
	}
	printf("The summation is = %d \n", sum);
	return 0;
}
