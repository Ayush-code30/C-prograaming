#include<stdio.h>
int main(){
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if (age>=18){
		printf("can vote");
	}
	else{
		printf("can not vote");
	}
	return 0;
}
