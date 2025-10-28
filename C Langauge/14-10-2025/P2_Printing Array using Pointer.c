// Printing the Elements of the Array using the Pointer Variables
#include<stdio.h>
void print_ar(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("%d ", *(arr+i));
	}
	printf("\n");
}
void main(){
	int s;
	printf("Enter the Number of Elements in the Array: ");
	scanf("%d",&s);
	int ar[s];
	printf("Enter the Elements of Array: ");
	for(int i=0;i<s;i++){
		scanf("%d",&ar[i]);
	}
	print_ar(ar,s);
}
