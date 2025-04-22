/* *
   **
   ***
   ****
   *****
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	
	int x = 1,y;
	while(x<=5)
	{
		y = 1;
		while(y<=x)
		{
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
	
	
	
	
	return 0;
} 
