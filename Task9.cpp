#include<stdio.h>
int main()
{
	int bill_amount, visit_hour, membership_status, final_bill;
	printf("Enter your Visit Hour:");
	scanf("%d",&visit_hour);
	printf("\nEnter Your Total Bill Amount:");
	scanf("%d",&bill_amount);
	printf("\nAre you a member?(1 for yes / 0 for no):");
	scanf("%d",&membership_status);
	switch(membership_status){
	case 1:
		if(visit_hour>=15 && visit_hour<=17){
			final_bill=bill_amount*0.75;
		}	
		else
		final_bill=bill_amount*0.8;
		printf("\nYour Revised Final Bill is: %d",final_bill);
		break;
	case 0:
			if(visit_hour>=15 && visit_hour<=17){
			final_bill=bill_amount*0.9;}
		else
		final_bill=bill_amount;
		printf("\nYour Revised Final Bill is: %d",final_bill);
		break;
	default:
		printf("Wrong Input");	
		
	}
	
		
}
