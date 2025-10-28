#include<stdio.h>
void swap(int *c, int*d){
	*c = *c + *d;
	*d = *c - *d;
	*c = *c - *d;
	printf("\nA & B at the Swap Function after swapping: %d & %d", *c, *d);
}
void main(){
	int a=10,b=20;
	printf("A & B before swapping: %d & %d",a,b);
	swap(&a,&b);
	printf("\nA & B at Main after swapping: %d & %d\n",a,b);
}
