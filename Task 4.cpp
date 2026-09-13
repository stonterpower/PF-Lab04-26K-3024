#include<stdio.h>
int main(){
	int member_type, time_slot;
	float final_fee, fee;
	printf("Enter your Membership Type(1=Student, 2=Regular, 3=Senior Citizen):");
	scanf("%d",&member_type);
	printf("\nEnter your Time slot(1=Morning, 2=Evening): ");
	scanf("%d",&time_slot);
	switch(member_type){
	case 1:
		fee=2000;	
		break;
	case 2:
		fee=3500;		
		break;
	case 3:
		fee=2500;		
		break;		
	default:
		printf("\nInvalid Membership Type");	
	} 
	if(time_slot==1){
			final_fee=fee*0.85;
			printf("\nYour Final Fee is: %f",final_fee);
		}	
		else if(time_slot==2)
			printf("\nYour Final Fee is: %f", fee);
		else 
		printf("\nInvalid Time slot");
	
	
	return 0;
	
	
}
