#include<stdio.h>
#include<stdlib.h>
int main(){
	int num, sum=0;
	printf("Enter the Number of Int Values here: ");
	scanf("%d",&num);
	int *ptr = (int *) malloc(sizeof(int)*num);
	printf("Start entering the Values: ");
	for(int i=0;i<num;i++){
		scanf("%d",&(*(ptr+i)));
		sum = sum + *(ptr+i);
	}
	
	printf("The Values printed are: ");
	for(int i=0;i<num;i++){
		printf("%-3d",(*(ptr+i)));
	}
	
	printf("\nThe Values Sum of Values inputted are: %d\n",sum);
	
	free(ptr);
	ptr=NULL;
}
