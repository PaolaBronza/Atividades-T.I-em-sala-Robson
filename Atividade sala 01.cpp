#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (void){
	setlocale(LC_ALL,"portuguese");
	int num,num2;
	printf("Digite um número de 1 a 10: ");
	scanf("%d",&num);
	printf("Digite um número de 1 a 10: ");
	scanf("%d",&num2);
	printf("Números recebidos: %d e %d",num,num2);
	
	if(num==5||num2==10){
		printf("\n5 ou 10");
	}	
	if(num<num2){
		printf("\nPrimeiro é menor");
		}
	if(num>num2){
		printf("\nPrimeiro é maior");
	}
	return 0;
}
