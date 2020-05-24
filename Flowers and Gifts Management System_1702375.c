/*Name: Anastassia Anderson
ID#: 1702375
Title:Programming Project Part 3*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{
	char password[]="CandyCrush220", enter_pass[20], option_select, gift_code[15];
	char customer_fname[15][15], customer_lname[15][15], recipient_fname[15][15], recipient_lname[15][15];
	char search_fname[15][15], search_lname[15][15], gift_type[15][15];
	float gift_cost[15], oldgift_cost, cost_candy=0, cost_basket=0, cost_flowers=0, total_cost=0;
	int attempts=1, orders=0,user_orders, i, place=0, gift_true=0, edit_true=0, total_flowers=0;
	int total_basket=0, total_candy=0, check_orders=0, search;
	
	//Welcome Screen requesting password
	printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
	printf("\n\t\t\t\t*\t\t\t\t\t\t*");
	printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
	printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
	printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
	
	printf("\n\t\t\t\t\t\t +++++++++++++");
	printf("\n\t\t\t\t\t\t +  Welcome  +\n");
	printf("\t\t\t\t\t\t +++++++++++++\n");
	printf("\n\n\n\t\t\t\t\t  Password:");
	gets(enter_pass);
	
	system("cls");
	
	while(attempts<3)
	{
		if(strcmp(enter_pass, password)!=0)
		{
			//response if password is incorrect
			printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
			printf("\n\t\t\t\t*\t\t\t\t\t\t*");
			printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
			printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
			printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
			
			printf("\n\t\t\t\t\t\t +++++++++++++");
			printf("\n\t\t\t\t\t\t +  Welcome  +\n");
			printf("\t\t\t\t\t\t +++++++++++++\n");
			
			printf("\n\n\n\t\t\t\t\tPassword wrong\n");
			printf("\t\t\t\t\t%d of 3 attempts failed\n", attempts);
			printf("\t\t\t\t\tPassword:");
			gets(enter_pass);
			attempts++;
			
			system("cls");
			
			if(attempts==3)
			{
				printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*");
				printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
				printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
				
				printf("\n\t\t\t\t\t\t +++++++++++++");
				printf("\n\t\t\t\t\t\t +  Welcome  +\n");
				printf("\t\t\t\t\t\t +++++++++++++\n");
				
				printf("\n\n\n\t\t\t\t\t\tPassword wrong\n");
				printf("\t\t\t\t\t\t%d of 3 attempts failed\n", attempts);
				printf("\t\t\t\t\t\tSystem Locked\n");
				printf("\t\t\t\tKindly contact system administrator to unlock\n");
				return 0;
			}
		}
		else
		{
			//response if password is correct
			printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
			printf("\n\t\t\t\t*\t\t\t\t\t\t*");
			printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
			printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
			printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
				
			printf("\n\t\t\t\t\t\t +++++++++++++");
			printf("\n\t\t\t\t\t\t +  Welcome  +\n");
			printf("\t\t\t\t\t\t +++++++++++++\n");
			printf("\n\n\t\t\t\t\t  Password correct\n");
			printf("\t\t\t\t\t Press any key to continue");
			
			getch();
			attempts=3;
		}//if-then-else statement for password acceptance
	}//While loop allowing only 3 password attempts
	
	//Task Menu
	system("cls");	
	while (orders<=15)
	{	
		printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
		printf("\n\t\t\t\t*\t\t\t\t\t\t*");
		printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
		printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
		printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
		
		printf("\n\t\t\t\t\t\t +++++++++++++++");
		printf("\n\t\t\t\t\t\t +  Task Menu  +\n");
		printf("\t\t\t\t\t\t +++++++++++++++\n\n");
		
		fflush(stdin);
		printf("\t\t\t\t   (A)Accept Flowers/Gift Orders\n\t\t\t\t   (E)Edit Flowers/Gift Orders\n");
		printf("\t\t\t\t   (D)Display Flowers/Gift Orders\n\t\t\t\t   (X)Exit\n\n");
		printf("\t\t\t\t\tSelect from Task Menu:");
		scanf("%c", &option_select);
	
		system("cls");	
		
		if (option_select=='A'||option_select=='a')
		{
			//ADD ORDERS
			printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
			printf("\n\t\t\t\t*\t\t\t\t\t\t*");
			printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
			printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
			printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
		
			printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
			printf("\n\t\t\t\t\t + Accept Flowers/Gift Orders +\n");
			printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
			
			printf("\t\t\t\t\tNumber of orders to be added: ");
			scanf("%d", &user_orders);
			
			system("cls");	
			
			if((check_orders=orders+user_orders)<=15)
			{
				for(i=orders+1;i<check_orders+1;i++)
				{
					printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
					printf("\n\t\t\t\t*\t\t\t\t\t\t*");
					printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
					printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
					printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
			
					printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
					printf("\n\t\t\t\t\t + Accept Flowers/Gift Orders +\n");
					printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
					
					printf("\t\t\t\t\t\t   Orders on System: %d\n", orders);
					printf("\t\t\t\t\t\t Current order: %d of %d\n", place=place+1,user_orders);
					
					printf("\t\t\t\t\t\t   ~~~~~~~~~~\n");
					printf("\t\t\t\t\t\t   ~Customer~\n");
					printf("\t\t\t\t\t\t   ~~~~~~~~~~\n");
					
					printf("\t\t\t\t\tFirst Name: ");
					scanf("%s", customer_fname[i]);
					
					printf("\t\t\t\t\tLast Name: ");
					scanf("%s", customer_lname[i]);
					
					printf("\t\t\t\t\t\t   ~~~~~~~~~~\n");
					printf("\t\t\t\t\t\t   ~Recipient~\n");
					printf("\t\t\t\t\t\t   ~~~~~~~~~~\n");
					
					printf("\t\t\t\t\tFirst Name: ");
					scanf("%s", recipient_fname[i]);
					
					printf("\t\t\t\t\tLast Name: ");
					scanf("%s", recipient_lname[i]);
				
					fflush(stdin);
					printf("\t\t\t\t\t\t   ~~~~~~~~~~\n");
					printf("\t\t\t\t\tGift Code: ");
					scanf("%s", &gift_code[i]);
					
					system("cls");
					
					while (gift_true>=0)
					{
						if(gift_code[i]=='C'||gift_code[i]=='c')
						{
							gift_true++;
							total_candy++;
							gift_cost[i]=3500;
							cost_candy=cost_candy+gift_cost[i];
							total_cost=total_cost+gift_cost[i];
							strcpy(gift_type[i], "Gourmet-Candy");
							printf("\t\t\t\t\tGift type: %s\n\n", gift_type[i]);
							break;
						}
						else
						{
							if(gift_code[i]=='G'||gift_code[i]=='g')
							{
								gift_true++;
								total_basket++;
								gift_cost[i]=3000;
								cost_basket=cost_basket+gift_cost[i];
								total_cost=total_cost+gift_cost[i];
								strcpy(gift_type[i], "Gift-Basket");
								printf("\t\t\t\t\tGift type: %s\n\n", gift_type[i]);
								break;
							}
							else
							{
								if(gift_code[i]=='F'||gift_code[i]=='f')
								{
									gift_true++;
									total_flowers++;
									gift_cost[i]=2500;
									cost_flowers=cost_flowers+gift_cost[i];
									total_cost=total_cost+gift_cost[i];
									strcpy(gift_type[i], "Flowers");
									printf("\t\t\t\t\tGift type: %s\n\n", gift_type[i]);
									break;
								}
								else
								{
									//gift code validation and reacceptance
									
									printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
									printf("\n\t\t\t\t*\t\t\t\t\t\t*");
									printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
									printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
									printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
					
									printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
									printf("\n\t\t\t\t\t + Accept Flowers/Gift Orders +\n");
									printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
									
									printf("\t\t\t\t\tInvalid Gift Code\n");
									printf("\t\t\t\t\tGift Code: ");
									scanf("%s", &gift_code[i]);	
									system("cls");
								}
							}
						}
					}
					system("cls");					
				}
				place=0;
				orders=check_orders;
				
				printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*");
				printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
				printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
			
				printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
				printf("\n\t\t\t\t\t + Accept Flowers/Gift Orders +\n");
				printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
				
				printf("\t\t\t\t\t~Order(s) %d of %d accepted~\n", user_orders, user_orders);
				printf("\t\t\t\t\t~Press any key to continue~");
				getch();
				
				system("cls");		
			}
			else
			{
				printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*");
				printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
				printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
			
				printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
				printf("\n\t\t\t\t\t + Accept Flowers/Gift Orders +\n");
				printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
				
				printf("\n\t\t\t\tThe sum of orders on the system will be %d.\n", check_orders);
				printf("\t\t\t\t\t%d orders will exceed the maximum 15 orders allowed", user_orders);
				system("cls");
				continue;	
			}//if orders exceed 15 before being added
		}
		else
		{
			//EDIT RECORDS
			if (option_select=='E'||option_select=='e')
			{
				printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*");
				printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
				printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
				printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
		
				printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
				printf("\n\t\t\t\t\t + Edit Flowers/Gift Orders +\n");
				printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
				
				printf("\t\t\t\t\t   ~Search by Customer name~\n\n");
				
				printf("\t\t\t\t   Last Name:  ");
				scanf("%s", &search_lname[i]);
				
				for(i=0;i<15;i++)
				{
					if(strcmp(search_lname[i], customer_lname[i])!=0)
					{
						printf("\t\t\t\t\tName not found");
						getch();
						break;
						system("cls");	
					}
					else
					{
						
						printf("\t\t\t\t   First Name: ");
						scanf("%s", &search_fname[i]);
						
						if(strcmp(search_fname[i] ,customer_fname[i])==0)
						{
							printf("\t\t\t\t\tName found");
							printf("\t\t\t\t\tOrder %d\n", search=i=1);
							
							oldgift_cost=gift_cost[i];
							printf("\t\t\t\t\tEnter new gift code\n");
							scanf("%s", &gift_code[i]);
							
							gift_true=0;
							
							while (gift_true>=0)
							{
								if(gift_code[i]=='C'||gift_code[i]=='c')
								{
									gift_true++;
									total_candy++;
									gift_cost[i]=3500;
									cost_candy=cost_candy+gift_cost[i];
									total_cost=total_cost+gift_cost[i];
									strcpy(gift_type[i], "Gourmet-Candy");
									break;
								}
								else
								{
									if(gift_code[i]=='G'||gift_code[i]=='g')
									{
										gift_true++;
										total_basket++;
										gift_cost[i]=3000;
										cost_basket=cost_basket+gift_cost[i];
										total_cost=total_cost+gift_cost[i];
										strcpy(gift_type[i], "Gift-Basket");	
										break;
									}
									else
									{
										if(gift_code[i]=='F'||gift_code[i]=='f')
										{
											gift_true++;
											total_flowers++;
											gift_cost[i]=2500;
											cost_flowers=cost_flowers+gift_cost[i];
											total_cost=total_cost+gift_cost[i];
											strcpy(gift_type[i], "Flowers");
											break;
										}
										else
										{
											//gift code validation and reacceptance
												
											printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
											printf("\n\t\t\t\t*\t\t\t\t\t\t*");
											printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
											printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
											printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
					
											printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
											printf("\n\t\t\t\t\t + Accept Flowers/Gift Orders +\n");
											printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
													
											printf("\t\t\t\t\tInvalid Gift Code\n");
											printf("\t\t\t\t\tGift Code: ");
											scanf("%s", &gift_code[i]);	
											system("cls");
											break;;
										}
									}
								}
							}//while loop to validate gift code
							printf("\t\t\t\t\tCustomer: %s %s\n", customer_fname[i], customer_lname[i]);
							printf("\t\t\t\t\tRecipient: %s %s\n", recipient_fname[i], recipient_lname[i]);
							printf("\t\t\t\t\tNew gift code: %c\n", gift_code[i]);
							printf("\t\t\t\t\tPrevious Gift: $%.2f\n", oldgift_cost);
							printf("\t\t\t\t\tGift cost: $%.2f\n", gift_cost[i]);
							
							system("cls");
						}
						
					}
				}//for loop for search array		
			}
			else
			{
				//DISPLAY RECORDS
				if (option_select=='D'||option_select=='d')
				{
					printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
					printf("\n\t\t\t\t*\t\t\t\t\t\t*");
					printf ("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
					printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
					printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
					
					printf("\n\t\t\t\t\t ++++++++++++++++++++++++++++++");
					printf("\n\t\t\t\t\t + Display Flowers/Gift Orders +\n");
					printf("\t\t\t\t\t ++++++++++++++++++++++++++++++\n\n");
					
					for(i=1;i<check_orders+1;i++)
					{
						printf("\t\t\t\t\t\t   Order %d of %d\n", i, orders);
						printf("\t\t\t\t\tCustomer: %s %s\n", customer_fname[i], customer_lname[i]);
						printf("\t\t\t\t\tRecipient: %s %s\n", recipient_fname[i], recipient_lname[i]);
						printf("\t\t\t\t\tGift code: %c\n", gift_code[i]);
						printf("\t\t\t\t\tGift cost: %.2f\n", gift_cost[i]);
						printf("\t\t\t\t\tGift type: %s\n\n", gift_type[i]);
					}//for loop for displaying all orders entered
					
					printf("\n\t\t\t\t\tTotal Flowers Ordered: %d\tTotal: $%.2f\n", total_flowers, cost_flowers);
					printf("\t\t\t\t\tTotal Gift Baskets Ordered: %d\tTotal: $%.2f\n", total_basket, cost_basket);
					printf("\t\t\t\t\tTotal Gourmet Candy Ordered: %d\tTotal: $%.2f\n", total_candy, cost_candy);
					printf("\n\t\t\t\t\tTotal Cost of Orders: $%.2f\n", total_cost);
					printf("\t\t\t\t\t~Press any key to continue~");
					getch();
					system("cls");
					//Printing all totals
				}
				else
				{
					//EXIT OPTION
					if (option_select=='X'||option_select=='x')
					{
						printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
						printf("\n\t\t\t\t*\t\t\t\t\t\t*");
						printf("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
						printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
						printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
						
						printf("\n\t\t\t\t\tExit option Selected. Have a nice day");
						return 0;
					}
					else
					{
						printf("\n\n\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-");
						printf("\n\t\t\t\t*\t\t\t\t\t\t*");
						printf("\n\t\t\t\t-    Flowers and Gifts Management System\t-");
						printf("\n\t\t\t\t*\t\t\t\t\t\t*\n");
						printf("\t\t\t\t-*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*|*-\n");
						printf("\n\t\t\t\t\tInvalid Menu option Selected\n");
						printf("\t\t\t\t\tKindly select a valid menu option\n\t\t\t\t\tPress any key to continue");
						
						getch();
						system("cls");	
					}//invalid task menu selection	
				}
			}		
		}
	}//while loop allowing for only 15 orders and repitition of task menu
	
}
