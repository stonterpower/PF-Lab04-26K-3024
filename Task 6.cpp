#include<stdio.h>
int main(){
	int plan, min, ex_min, price, exc, total;
	printf("Enter your plan: \n1.Rs.500 for 1000 mins \n2.Rs.800 for 2000 mins \n3.Rs.1200 for unlimited mins \n4.Custom plan at 1rs/min \n ");
	scanf("%d",&plan);
	printf("Enter The Minutes Used:");
	scanf("%d",&min);
	switch(plan){
	
	case 1:
		price=500;
		if(min>1000){
			ex_min=min-1000;
			exc=ex_min*2;
			total=price+exc;
			printf("Your Total Bill is: %d",total);
		}
		else
		printf("Your Total Bill is: %d",price);
		break;
	case 2:
		price=800;	
		if(min>2000){
			ex_min=min-2000;
			exc=ex_min*2;
			total=price+exc;
			printf("Your Total Bill is: %d",total);
		}
		else 
		printf("Your Total Bill is: %d",price);
		break;
	case 3:
		price=1200;	
		printf("Your Total Bill is: %d",price);
		break;
	case 4:
		exc=min*1;
		price=exc;
		printf("Your Total Bill is:%d",price);
		break;
	default:
		printf("Invalid Plan Number");		
}
	
	return 0;
}
