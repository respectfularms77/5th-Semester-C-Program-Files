#include<stdio.h>
void main() {
	printf("The Values are: ");
	for(int i=0;i<10;++i)
		printf("%d",i&1);
	printf("\n");
}
