#include<stdio.h>

int main(){
	int count = -1;
	while(count < 0 || count>23){
		printf("Height :");
		scanf("%d", &count);
	}
	int c = 2,p = 2;
	int i;
	while(count > 0){
		for(i = count-1; i>0;i--){
			printf(" ");
			
		}
		while(c>0){
			printf("#");
			c--;
		}
		printf("\n");
		c = ++p;
		count--;
	}
	return 0;
}
