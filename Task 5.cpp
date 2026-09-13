#include<stdio.h>
int main(){
	int weight, no_people;
	printf("Enter your Combined Weight:");
	scanf("%d",&weight);
	printf("\nEnter the Number of People in the Elevator:");
	scanf("%d",&no_people);
	if(no_people>10 || weight>1000)
	printf("\nEntry Denied");
	else
	printf("\nEntry Granted");
	
	return 0;
}
