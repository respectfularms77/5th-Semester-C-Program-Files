#include<stdio.h>
void main(){
	int size,min;
	printf("Enter A Number of elements you want in Array: ");
	scanf("%d",&size);
	int ar[size];
	printf("Enter the Elements for the Array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&ar[i]);
		if(i==0) 	min=ar[i];
		if(ar[i]<min)	min=ar[i];
	}
	printf("The Minimun Element in the array is: %d\n",min);
}
