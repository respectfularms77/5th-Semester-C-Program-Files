#include<stdio.h>
void main() {
	int year;
	printf("Enter the Year to be calculated as Leap Year or not: ");
	scanf("%d", &year);
	if (year%400 == 0 || (year%4==0 && year%100!=0)) printf("Yes Its a Leap Year\n");
	else printf("Not A Leap Year\n");
}
