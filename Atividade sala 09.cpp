#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int h,raio,qt_lata;
	float areab,custo,litro,base;

	printf("Insira a altura: ");
	scanf("%d",&h);
	printf("Insira o raio: ");
	scanf("%d",&raio);
	
	base=3.14*raio*raio;//pow(raio,2)
	areab=base*2*h;
	litro=areab/3;
	qt_lata=litro/3;
	custo=qt_lata*20;
	
	printf("Qt litro: %d \nvalor cobrado: %f",qt_lata,custo);
	return 0;
}
