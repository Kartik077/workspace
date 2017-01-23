#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char number[30];
	printf("O hai! How much change is owed?\n");
	int i=0, count = 0;
	float t;
	gets(number);
	int max;
	while(!((tolower(number[i])>=48 && tolower(number[i])<=57) || number[0] == 45 || number[i] == 46)){
	    printf("Retry: ");
	    gets(number);
	    i++;
	}
	int a[4] = {25, 10, 5, 1};
	double pr = strtod(number, NULL);
	while(pr < 0.00){
		printf("How much change is owed?\n");
		scanf("%f", &t);
		pr = t;
	}
	float p = pr*100;
	while(p > 0){
		max=0;
		for(i=0;i<4;i++){
			if(a[i]>max && a[i]<=p){
				max = a[i];
			}
		}
		p -= max;
		count++;
	}
	printf("%d\n",count);
	return 0;
}
