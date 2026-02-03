#include<stdio.h>
int main()
{
	float temperature;
	printf("Enter the temperature in celsius:");
	scanf("%f", &temperature); 
	if (temperature > 37 )
	printf("You have a fever");
	else
	printf("You don't have a fever");
	return 0;
}
