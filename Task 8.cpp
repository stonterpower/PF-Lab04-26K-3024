#include<stdio.h>
int main()
{
	int z_type, speed, z_limit, fine, final_fine;
	printf("Enter the Zone Type:\n1. School Zone \n2. Highway \n3. Residential Area\n");
	scanf("%d",&z_type);
	printf("\nEnter your Vehicle Speed:");
	scanf("%d",&speed);
	switch(z_type){
		case 1:
			z_limit=30;
			fine=1000;
			if(speed>z_limit && speed<50){
				printf("\nYour Fine is: %d",fine);
			}
			else if(speed>=50){
			final_fine=fine*2;
			printf("\nYour Fine is: %d",final_fine);}
			else 
			printf("\nNo Fine");
		break;
		case 2:	
			z_limit=100;
			fine=1000;
			if(speed>z_limit && speed<1020){
				printf("\nYour Fine is: %d",fine);
			}
			else if(speed>=1020){
			final_fine=fine*2;
			printf("\nYour Fine is: %d",final_fine);}
			else 
			printf("\nNo Fine");
		break;
		case 3:
			z_limit=50;
			fine=1000;
			if(speed>z_limit && speed<70){
				printf("\nYour Fine is: %d",fine);
			}
			else if(speed>=70){
			final_fine=fine*2;
			printf("\nYour Fine is: %d",final_fine);}
			else 
			printf("\nNo Fine");
		break;
		default:
			printf("Invalid Input");

	}
	
	
	return 0;
	
}
