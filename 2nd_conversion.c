#include<stdio.h>
int main() {
	double miles,kms;
	printf("Enter the distance in Miles: ");
	scanf("%lf", &miles);
	
	kms = 1.609 * miles;
	
	printf("The distance in Kilometers is: %lf \n",kms);
}
