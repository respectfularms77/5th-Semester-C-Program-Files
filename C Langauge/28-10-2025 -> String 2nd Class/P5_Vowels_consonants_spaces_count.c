#include<stdio.h>
#include<string.h>
void main(){
	char st[50];
	printf("Enter a String: ");
	fgets(st, 30, stdin);
	char rec = st[0];
	int cv=0, cc=0,cp=0,idx=0;
	while(rec){
		if(rec=='a' || rec=='e' || rec=='i' || rec=='o' || rec=='u' || rec=='A' || rec=='E' || rec=='I' || rec=='O' || rec=='U')
			cv++;
		else if((65 <= rec && rec <= 90) || (97 <= rec && rec <= 122))
			cc++;
		else if(rec==' ')
			cp++;
		rec = st[++idx];
	}
	printf("Vowels, Consonents & Spaces are: %d, %d & %d\n",cv, cc,cp);
}
