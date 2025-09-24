#include<stdio.h>
int g(int x){
	static int y=20;
	y++;
	printf("g(x): x=%d & y=%d & x+y=%d\n",x,y,(x+y));
	return (x+y);
}
int f(int x){
	int y;
	y=g(x);
	printf("f(x): x=%d & y=%d & x+y=%d\n",x,y,(x+y));	
	return (x+y);
}
void main() {
	int x=5,y=10;
	for(int i=1;i<=2;i++){
		y += f(x) + g(x);
		printf("\n%d\n",y);
	}
}
