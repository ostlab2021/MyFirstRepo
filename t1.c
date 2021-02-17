#include<stdio.h>
int main(){
	int num;
	do{
		printf("Enter a Positive Integer");
		scanf("%d",&num);
	}while(num<0);
	int factorial,i;
	for (i=0;i<=num;i++){
		factorial=factorial*i;
	}
	printf("%d! = %d\n",num,factorial);
	return 0;
}
