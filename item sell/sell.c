/*write a c program to input the items purchased by the retailer from  a distributer and find the total price to be paid by the retailer
item         price
1            300.25
2			 145.50
3            525.25
 order consist of many items until the user input -1*/
 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 int main()
 {
	int qty; //declare the quantity variable to input the quantity and store it in this variable
 	float totpay; //declare the total amount to be paid by the user and store it in this variable
 	int itemno; //declare the item no 
	float pay1;
	float pay2;
	float pay3;
 	printf("Enter the item no: ");
 	scanf("%d", &itemno);
 	int count;
 	while(itemno != -1)
 	{
 		if (itemno == 1)
 		{
 			printf("Enter the amount that you need to purchased: ");
 			scanf("%d", &qty);
 			pay1 = 300.25*qty;
 			
		}
 		else if(itemno == 2)
 		{
 			printf("Enter the amount that you need to purchased: ");
 			scanf("%d", &qty);
 			pay2 = 145.50*qty;
 		
		}
		else if(itemno == 3)
		{
			printf("Enter the amount that you need to purchased: ");
 			scanf("%d", &qty);
 			pay3 = 525.25*qty;
 			
		}
		printf("Enter the item no: ");
 		scanf("%d", &itemno);
 		totpay = pay1+pay2+pay3;
 		count++;
 		
	}
	printf("Total pay is %.2f", totpay);
	
 	return 0;
 }
