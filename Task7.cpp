#include<stdio.h>
int main()
{
	int policy_status, vehicle_age, claim_amount, real_amount;
	printf("Is your policy active? (1 for yes / 0 for no):");
	scanf("%d",&policy_status);
	switch(policy_status){
	
	case 0:
		printf("\nYour Claim Amount has been Rejected");
		break;
	case 1:
		printf("\nEnter your Claim Amount:");
		scanf("%d",&claim_amount);
		printf("\nEnter your Vehicle Age:");
		scanf("%d",&vehicle_age);
		if(claim_amount<=500000 && vehicle_age<10){
			printf("Claim Amount Approved");
			printf("\nClaim Amount = %d",claim_amount);
		}
		else if(claim_amount<=500000 && vehicle_age>=10 && vehicle_age<=15){
			printf("Half of Claim Amount Approved");
			real_amount=claim_amount/2;
			printf("\nClaim Amount = %d", real_amount);
		}
		else{
			printf("Your Claim Amount has been Rejected");
		}
		break;
	default:
		printf("Wrong Input");
}
	return 0;		
	
	
	
	
	
	
	
	
	
	
}
