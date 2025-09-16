#include<stdio.h>
int max_num(int arr[], int n) {
	int max = arr[0];
	for(int i=1;i<n;i++){
		if (arr[i]>max) max = arr[i];
	}
	return max;
}
void main() {
	int size;
	printf("Enter the Number of Elements: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the %d Values for an Array: ",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int max = max_num(arr, size);
	printf("The Max Value of Array is: %d\n", max);
}
