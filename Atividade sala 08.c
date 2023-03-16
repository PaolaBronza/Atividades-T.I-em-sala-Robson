#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	float x1,x2,y1,y2;
	float distancia;
	printf("v(x2-x1)^2+(y2-y1)^2");
	printf("\nDigite o valor de x1: ");
	scanf("%f",&x1);
	printf("Digite o valor de y1: ");
	scanf("%f",&y1);
	printf("Digite o valor de x2: ");
	scanf("%f",&x2);
	printf("Digite o valor de y2: ");
	scanf("%f",&y2);
	distancia=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("A distância entre os pontos P1 e P2 é de: %f",distancia);
	return 0;
}
