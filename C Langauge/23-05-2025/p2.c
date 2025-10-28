#include<stdio.h>
int f(int n){
	static int r=5;
	if(n<=1){
		r=r+7;
		printf("If n<=1: r=%d & n=%d\n",r,n);
		return 3;
	}
	if(n>3){
		printf("If n>3: r=%d & n=%d\n",r,n);
		return (r+f(n-2));
	}
	printf("NO Ifs: r=%d & n=%d\n",r,n);
	return (r+f(n-1));
}
void main() {
	int n=7;
	printf("\n%d\n",f(n));
}
