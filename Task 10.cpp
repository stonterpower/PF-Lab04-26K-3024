#include<stdio.h>
int main()
{
	int heart_rate, temp;
	printf("Enter the Patients Heart Rate:");
	scanf("%d",&heart_rate);
	printf("Enter the Patients Body Temperature(in celsius):");
	scanf("%d",&temp);
	if(heart_rate>120 && temp>39){
		printf("Critical - Immediate Attention");
	}
	else if (heart_rate>=100 && heart_rate<=120 && temp>=37.5){
		printf("Urgent");
}
	else
	printf("Normal - Wait in Queue");
	
	return 0;
}
