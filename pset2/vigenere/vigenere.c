#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, const char* argv[]){
	if(argc != 2){
	    printf("Usage: ./vignere k\n");
		return 1;
	}
	char s[10];
	strcpy(s,argv[1]);
	int i;
	for(i=0;i<strlen(s);i++){
		s[i] = tolower(s[i]);
		if(!(s[i]>=97 && s[i]<=122)){
			printf("Usage: ./vignere k\n");
			return 1;
		}
	}
	printf("Plaintext:  ");
	int count=0;
	char n[30];
	gets(n);
	printf("ciphertext: ");
	for(i=0;i<strlen(n);i++){
		if(n[i]>=97 && n[i]<=122){
			printf("%c", (((n[i]-97+s[(i-count)%strlen(s)]-97)%26)+97));
		}
		else if(n[i]>=65 && n[i]<=90){
			printf("%c", (((n[i]-65+s[(i-count)%strlen(s)]-97)%26)+65));
		}
		else{
			printf("%c", n[i]);
			count++;
		}
	}
	printf("\n");
	return 0;
}
