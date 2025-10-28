//Add 2 Numbers using Call by Reference
#include<stdio.h>
int add(int *p1, int *p2){
	return *p1 + *p2;
}
void main(){
	int n1,n2,ans;
	printf("Enter 2 Numbers: ");
	scanf("%d %d",&n1,&n2);
	ans=add(&n1,&n2);
	printf("The Result at Main Function: %d\n",ans);
}
