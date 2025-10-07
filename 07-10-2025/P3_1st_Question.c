#include<stdio.h>
int i=5,j=10;
void f(int *p, int *q){
	p=q;
	*q=2;
	*p=5;
}

void main() {
	f(&i,&j);
	printf("Value of i: %d & j: %d\n",i,j);
}
