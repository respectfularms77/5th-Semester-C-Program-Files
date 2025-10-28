#include<stdio.h>
#include<string.h>
void main(){
	char st[20], stt[20];
	printf("Enter the Required String: ");
	fgets(st,20,stdin);
	char ch = st[0];
	int count = 0,ind=0;
	while(ch!='\n'){
	ch = st[++ind];
	count++;
	}
	printf("The Number of Character are: %d\n",count);
}
