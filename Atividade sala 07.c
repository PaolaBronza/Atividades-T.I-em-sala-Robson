#include<stdlib.h>
#include<stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num, num2;
	
	printf("insira sua idade:");
	scanf("%d", &num);
	printf("insira seu tempo de carteira de motorista:");
	scanf("%d", &num2);
	
	if((num >= 18) && (num2 >= 2)){
		printf("Você pode dirigir");	
	}else{
		printf("Você não atende aos requisitos para dirigir");
	}
	return 0;
}
