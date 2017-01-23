#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char* argv[]){
	if(argc != 2){
	    printf("Usage: ./caesar\n");
		return 1;
	}
	int key;
	key = ((int)*argv[1] - 48);
	//printf("%d\n", key);
	printf("plaintext:  ");
	char n[30];
	gets(n);
	int i, x;
	printf("ciphertext: ");
	for(i=0;i<strlen(n);i++){
		if(n[i]>=65 && n[i]<=90){
			x = (n[i]-65+key)%26;
			printf("%c", (x+65));
		}
		else if(n[i]>=97 && n[i]<=122){
			x = (n[i] - 97 + key)%26;
			printf("%c", (x+97));
		}
		else{
			printf("%c", n[i]);
		}
	}
	printf("\n");
	return 0;
}
