#include<stdio.h>
int r(){
	static int num=4;
	return num--;
}
int main(){
	for(r(); r(); r()){
		printf("%d",r());
	}
	printf("\n");
	return 0;
}
