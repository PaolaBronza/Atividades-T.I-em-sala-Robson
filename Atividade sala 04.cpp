#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int idade;
	float altura;
	printf("insira sua idade: ");
	scanf("%d",&idade);
	printf("insira sua altura: ");
	scanf("%f",&altura);
	
	if(idade>=18&&altura>=1.60){
		printf("\nVocê pode entrar!");
	}
	else if(idade<18||altura<1.60){
		printf("\nDesculpe, você não atende aos requisitos de altura e(ou) idade para entrar.");
	}
	return 0;
}
