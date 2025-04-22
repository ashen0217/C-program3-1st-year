#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
float calcpayment();
int main(void)
{
	float urea;
	float tsp;
	float mop;
	int i;
	int weeks;
	
	
	printf("Enter the weeks of the crop: ");
	scanf("%d", &weeks);
	
	if(weeks == 0)
	{
		printf("urea-0kg,tsp-35kg,mop-0kg\n");
	}
	if(weeks == 2)
	{
		printf("urea-30kg,tsp-0kg,mop-0kg\n");
	}
	if(weeks == 4)
	{
		printf("urea-65kg,tsp-0kg,mop-25kg\n");
	}
	if(weeks == 6)
	{
		printf("urea-50kg,tsp-0kg,mop-25kg\n");
	}
	if(weeks == 7)
	{
		printf("urea-30kg,tsp-0kg,mop-0kg\n");
	}

	printf("The payment is %.2f",calcpayment());
	return 0;
}

float calcpayment()
{
	int age;
	float payment;
	
	printf("Enter the age: ");
	scanf("%d", &age);
	
	if(age == 0)
	{
		payment = 60*35;
	}
	if(age == 2)
	{
		payment = 30*68;
	}
	if(age == 4)
	{
		payment = 65*68+25*75;
	}
	if(age == 6)
	{
		payment = 68*50+25*75;
	}
	if(age == 7)
	{
		payment = 68*30;
	}
	return payment;
}




