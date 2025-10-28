#include<stdio.h>
void main() {
	int a=10,b=15;
	printf("Before Swapping the values of a & b are: %d & %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After Swapping the values of a & b are: %d & %d\n\n",a,b);
}
