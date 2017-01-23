#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char n[70];
	gets(n);
	int i;
	for(i=0;i<strlen(n);i++){
		n[i] = toupper(n[i]);
		//printf("%d\n",n[i]);
	}
	for(i=0;i<strlen(n);i++){
		if(n[i]>=65 && n[i]<=90){
			if(!(n[i-1]>=65 && n[i-1]<=90)){
				printf("%c", n[i]);
			}
		}
	}
	printf("\n");
	return 0;
}
