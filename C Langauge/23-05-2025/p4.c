#include<stdio.h>
void main(){
	int size,max,min;
	printf("Enter the Number of elements you want to have in array: ");
	scanf("%d",&size);
	int ar[size];
	printf("Now you can enter the values of Array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&ar[i]);
		if(i==0){
			max=ar[0];
			min=ar[0];
		}
		if(ar[i]>max)	max=ar[i];
		if(ar[i]<min)	min=ar[i];
	}
	printf("\n\nNow Printing the values of Array: ");
	for(int i=0;i<size;i++){
		printf("%d ",ar[i]);
	}
	printf("\nMaximum Element present is: %d\n",max);
	printf("Minimum Element present is: %d\n",min);
	
	printf("The Value of Array: %p\n",&ar);				//%p = Pointer Address or %u = unassigned value
	//printing Variable's name = value |||| printing Array's name = address of that array
}	
