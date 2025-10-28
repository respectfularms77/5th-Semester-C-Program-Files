#include<stdio.h>
#include<string.h>
void main(){
	char st[50];
	printf("Enter a String: ");
	fgets(st, 30, stdin);
	char rec = st[0];
	int idx=0;
	while(rec){
		if(rec=='a' || rec=='e' || rec=='i' || rec=='o' || rec=='u'){
			st[idx] = st[idx]-32;
		}
		rec = st[++idx];			
	}
	printf("New String are %s\n",st);
}
