#include<stdio.h>
void main(){
	int a=20;
	int *b=&a;
	int **c=&b;
	
	printf("a: %d\n",a);
	printf("Size of a: %ld\n\n",sizeof(a));
	
	printf("b: %p\n",b);
	printf("Size of b: %ld\n",sizeof(b));
	printf("A via B or *b: %d\n",*b);
	printf("Size of *b: %ld\n\n",sizeof(*b));
	
	printf("c: %p\n",c);
	printf("Size of c: %ld\n",sizeof(b));
	printf("A via C or **c: %d\n",**c);
	printf("B via C or *c: %p\n",*c);
	printf("Size of **c: %ld\n\n",sizeof(**c));
}
