#include<stdio.h>
void main(){
	int n,fac=1;
	printf("Enter A Number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fac = fac*i;
	}
	if(n>1) printf("\nThe Factorial of Number is: %d",fac);
	else if(n==0)	printf("\nThe Factorial of Number is: 1");
	else printf("\nEnter a Valid Input");
}
