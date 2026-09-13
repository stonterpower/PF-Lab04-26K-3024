#include<stdio.h>
int main(){
	int account_type;
	float balance, interest;
	printf("Enter your Account Type(1=Saving, 2=Current, 3=Fixed Deposit):");
	scanf("%d",&account_type);
	printf("\nEnter your Account Balance: ");
	scanf("%f",&balance);
	switch(account_type)
	{
		case 1:
			if(balance>=100000)
			interest=balance*0.04;
			else 
			interest=balance*0.02;
			printf("\nYour Interest is: %f",interest);
			break;
		case 2:
			printf("\nYour Interest is: 0");
			break;
		case 3:
			interest=balance*0.08;
			printf("\nYour Interest is: %f",interest);
			break;
		default:
			printf("\nWRONG INPUT");	
	}
	return 0;
	
}
