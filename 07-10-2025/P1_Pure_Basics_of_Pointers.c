#include<stdio.h>
void main(){
	int a=20;
	int *b=&a;
	printf("a: %d\n",a);
	printf("b: %p\n",b);
	printf("*b: %d\n",*b);
	printf("Size of a: %ld\n",sizeof(a));
	printf("Size of b: %ld\n",sizeof(b));
	printf("Size of *b: %ld\n",sizeof(*b));
}
