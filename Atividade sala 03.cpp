#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	printf("Insira sua nota: ");
	scanf("%d",&num);
	
	if(num>=7){
		printf("\naprovado!");
	}
	else if(num>5&&num<7){
		printf("\nrecuperação!");
	}
	else{
		printf("\nReprovado.");
	}
	return 0;
}
