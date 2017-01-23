#include<stdio.h>
#include<string.h>

int main(){
	//char s[20];
	long long int cno;
	int j = 0, i;
	printf("Number: ");
	//gets(s);
	scanf("%lld", &cno);
	/*while(j<strlen(s)){
		if(s[j]>=48 && s[j]<=57){
			j++;
		}
		else{
			printf("Retry : ");
			gets(s);
			j=0;
		}
	}*/
	//int count = strlen(s);
	//int a[count];
	/*for(i =0;i<count;i++){
		a[i] = (int) s[i]
	}*/
	//cno = (long long int) s;
	long long int p = cno;
	int count=0;
	while(p>0){
		p = p/10;
		count++;
	}
	int a[count];
	p = cno;
	for(i = 0;i<count;i++){
		a[i] = p%10;
		p = p/10;
	}
	for(i=0;i<count;i++){
		if(i%2==1){
			a[i] = a[i]*2;
		}
	}
	int sum=0;
	for(i=0;i<count;i++){
		if(a[i]/10 == 0){
			sum += a[i];
		}
		else {
			sum += 1+(a[i]-10);
		}
	}
	//printf("sum is: %d\n",sum);
	if(sum%10 == 0){
		if(count == 15 && (cno%10000000000000 == 34 || cno/10000000000000 == 37)){
			printf("AMEX\n");
		}
		else if(count == 13 && cno/1000000000000){
			printf("VISA\n");
		}
		else if(count == 16){
			int x = cno/100000000000000;
			if(x==51||x==52||x==53||x==54||x==55){
				printf("MASTER\n");
			}
			else if(x == 4){
				printf("VISA\n");
			}
		}
		else{
			printf("INVALID\n");
		}
	}
	else{
		printf("INVALID\n");
	}
	return 0;
}
