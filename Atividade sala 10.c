#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int preco,qtd,total,total1;
	
	printf("Insira o preço do produto:R$ ");
	scanf("%d",&preco);
	printf("Insira a quantidade: ");
	scanf("%d",&qtd);
	
	total=preco*qtd;
	
	if(total<100){
		printf("\nVocê recebeu um desconto de 5%c",37);
		total=total-(total*0.05);
	}
	if(total>=100){
	printf("\nVocê recebeu um desconto de 10%c",37);
	total=total-(total*0.1);;
	}
	
	printf("\nValor total da compra: R$%d",total);
	return 0;
}
