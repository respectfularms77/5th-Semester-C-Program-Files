//Take 2 Numbers -> pass the Address to Function & Calculate the Max within the Function -> return the Address of the Max Num in Main
#include<stdio.h>
int *funct(int *num1, int *num2){
	if (*num1 > *num2)	return num1;
	else	return num2;
}
void main(){
	int numa,numb;
	int *val;
	printf("Enter 2 Numbers: ");
	scanf("%d %d",&numa,&numb);
	val=funct(&numa,&numb);
	printf("The Max Number at Main Function: %d\n",*val);
}


/*ANS -->> passing 2 Address of Vars from main && receiving them at function at pointers -> 
Perform Calc && Return the Address of result's address ->
Store the Return's address at a Pointer type inside the Main */
