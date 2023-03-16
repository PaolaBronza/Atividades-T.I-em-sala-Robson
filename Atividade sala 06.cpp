#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	char mes[20];
		printf("Insira um mês: ");
		scanf("%s",mes);
		
		if(strcmp(mes,"janeiro")==0||strcmp(mes,"marco")==0||strcmp(mes,"maio")==0||strcmp(mes,"julho")==0||strcmp(mes,"agosto")==0||strcmp(mes,"outubro")==0||strcmp(mes,"dezembro")==0){
			printf("\nO mês inserido possui 31 dias");
		}
		else if(strcmp(mes,"abril")==0||strcmp(mes,"junho")==0||strcmp(mes,"setembro")==0||strcmp(mes,"novembro")==0){
			printf("\nO mês inserido possui 30 dias");
		}
		else if(strcmp(mes,"fevereiro")==0){
			printf("\nO mês inserido possui 28(ou 29) dias");
		}
		return 0;
	}
