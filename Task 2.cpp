#include<stdio.h>
int main(){
	int hsc_percent, test_score, hsc_weight, test_weight, final_score;
	printf("Enter your entry test score percentage: ");
	scanf("%d",&test_score);
	printf("\nEnter your HSC percentage: ");
	scanf("%d",&hsc_percent);
	hsc_weight=hsc_percent*0.5;
	test_weight=test_score*0.5;
	final_score=hsc_weight+test_weight;
	if(final_score>=80){
		printf("You are Accepted in CS Departement");
	}
	else if(final_score>=65){
		printf("You are Accepted in SE Departement");
	}
	else if(final_score>=50){
		printf("You are Accepted in IT Departement");
	}
	else
	printf("\nYour are Rejected");
	
	
	return 0;
	
}
