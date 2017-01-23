#include<stdio.h>

int main(){
	int count = -1;
	while(count < 0){
		printf("Height: ");
		scanf("%d", &count);
	}
	int c = 1, p = 1;
	int i;
	while(count > 0){
		for(i=count-1;i>0;i--){
			printf(" ");
		}
		while(c > 0){
			printf("#");
			c--;		
		}
		printf("  ");
		c = p;
		while(c > 0){
			printf("#");
			c--;
		}
		for(i=count-1;i>0;i--){
			printf(" ");		
		}
		printf("\n");
		c = ++p;
		count--;
	}
	return 0;
}
