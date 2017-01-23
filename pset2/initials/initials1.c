#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char n[30];
	gets(n);
	int i;
	for(i=0;i<strlen(n);i++){
		n[i] = toupper(n[i]);
	}
	printf("%c", n[0]);
	for(i =0;i<strlen(n);i++){
		if(n[i] == 32){
			printf("%c", n[i+1]);
		}
	}
	printf("\n");
	return 0;
}
