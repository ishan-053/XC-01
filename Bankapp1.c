/* Bank Project */

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int choice;
	int accno,user_input;
	char accname[20];
	long balance=0,deposit,withdraw;
	
	while(1)
	{
		printf("\n 1. Open New Account");
		printf("\n 2. Show Account");
		printf("\n 3. Deposit Amount");
		printf("\n 4. Withdraw Amount");
		printf("\n 5. Exit");
		
		printf("\n Enter choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\n Enter account number :");
				scanf("%d",&accno);
				
				printf("\n Enter account holder name :");
				scanf("%s",&accname);
				
				printf("\n Enter opening balance :");
				scanf("%ld",&balance);
				printf("\n -----------------------------------Creating Account---------------------------------");
				Sleep(6000);
				printf("\n \n \t New account created successfully. \n \n");
				break;
			case 2:
				printf("\n Enter account number to validate :");
				scanf("%d",&user_input);
				
				if(user_input==accno)
				{
					printf("\n ------------------------------------------------------------");
					printf("\n Account Confirmed \n");
					Sleep(1000);
					printf("\n Please wait... \n");
					printf("\n ------------------------------------------------------------");
					Sleep(6000);
					printf("\n Account Number : %d \t Account Name : %s \t  Balance :%ld",accno, accname,balance);
					printf("\n ------------------------------------------------------------");
				}
				else
				{
					printf("\n Invalid account number");
				}
				break;
				
			case 3:
				printf("\n Enter Amount to Deposit :");
				scanf("%d",&deposit);
				printf("\n \n ----------------------------Processing----------------------------- \n \n");
				Sleep(4000);
				 balance += deposit;
				printf("\n  Total Balence \n :%ld",balance);
				printf("\n Amount Deposit :%ld \n",deposit);
				break;
			case 4:
				printf("\n Enter Amount to Withdraw :");
				scanf("%d",&withdraw);
				
			if(withdraw>balance)
			
			{printf("\n Insufficient Balance \n");
				}	
				else {
				
				printf("\n \n ----------------------------Processing----------------------------- \n \n");
				Sleep(4000);
				printf("\n Total Balance \n :%ld",balance);
				printf("\n Amount Withdraw :%ld \n",withdraw);
			}
				break;
			case 5:
				exit(0);
				
			default:
				printf("\n Invalid option selected");
		}
	}
}
